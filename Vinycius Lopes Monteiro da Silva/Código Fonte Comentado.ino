// BOTÕES e LEDS
int botoes[] = {2, 4, 6, 8, 10, 12};
int leds[]   = {3, 5, 7, 9, 11, 13};

const int numElevadores = 6;
const int maxFila = 20;

// Fila de chamadas
int fila[maxFila];
int inicioFila = 0;
int fimFila = 0;

void setup() {
  for (int i = 0; i < numElevadores; i++) {
    pinMode(botoes[i], INPUT);
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Verifica novos pedidos
  for (int i = 0; i < numElevadores; i++) {
    if (digitalRead(botoes[i]) == LOW) {
      adicionarFila(i);   // adiciona o índice do botão na fila
      delay(200);         // debounce simples
    }
  }

  // Se há pedidos na fila, atende um por vez
  if (inicioFila != fimFila) {
    int chamada = removerFila();
    apagarTodos();
    digitalWrite(leds[chamada], HIGH);
    delay(5000); // tempo de atendimento
    digitalWrite(leds[chamada], LOW);
  }
}

// Funções de fila
void adicionarFila(int valor) {
  fila[fimFila] = valor;
  fimFila = (fimFila + 1) % maxFila;
}

int removerFila() {
  int valor = fila[inicioFila];
  inicioFila = (inicioFila + 1) % maxFila;
  return valor;
}

// Apaga todos os LEDs
void apagarTodos() {
  for (int i = 0; i < numElevadores; i++) {
    digitalWrite(leds[i], LOW);
  }
}

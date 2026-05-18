<div align="center">

<br/>

```
███████╗██╗     ███████╗██╗   ██╗ █████╗ ██████╗  ██████╗ ██████╗
██╔════╝██║     ██╔════╝██║   ██║██╔══██╗██╔══██╗██╔═══██╗██╔══██╗
█████╗  ██║     █████╗  ██║   ██║███████║██║  ██║██║   ██║██████╔╝
██╔══╝  ██║     ██╔══╝  ╚██╗ ██╔╝██╔══██║██║  ██║██║   ██║██╔══██╗
███████╗███████╗███████╗ ╚████╔╝ ██║  ██║██████╔╝╚██████╔╝██║  ██║
╚══════╝╚══════╝╚══════╝  ╚═══╝  ╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═╝
```

### Simulação de Elevador Inteligente com Arduino & Tinkercad

<br/>

[![Arduino](https://img.shields.io/badge/Arduino-UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Tinkercad](https://img.shields.io/badge/Tinkercad-Simulação-FF6B35?style=for-the-badge&logo=autodesk&logoColor=white)](https://www.tinkercad.com/)
[![C++](https://img.shields.io/badge/C%2B%2B-Embedded-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![SENAI](https://img.shields.io/badge/SENAI-IoT%20%7C%20Aulas%2024%20%26%2025-003082?style=for-the-badge)](https://www.senai.br/)

<br/>

> **Expandindo de 3 para 6 andares — sem tocar na lógica principal.**
> Um projeto de sistemas embarcados que demonstra escalabilidade real de software.

<br/>

</div>

---

## 🏢 Sobre o Projeto

Este projeto simula o funcionamento de um **elevador inteligente** em um prédio comercial, desenvolvido na disciplina de **IoT com Arduino** no SENAI. A simulação roda inteiramente no **Tinkercad**, eliminando a necessidade de hardware físico durante o desenvolvimento.

A evolução central do projeto foi a **expansão de 3 para 6 andares**, provando que uma arquitetura de código bem pensada permite crescimento sem reescritas — um conceito fundamental em sistemas embarcados.

```
  ┌─────┐
  │  6  │ ← novo
  ├─────┤
  │  5  │ ← novo
  ├─────┤
  │  4  │ ← novo
  ├─────┤
  │  3  │
  ├─────┤
  │  2  │
  ├─────┤
  │  1  │  🔲 LED + 🔘 Botão por andar
  └─────┘
  Arduino UNO
```

---

## ⚡ Componentes do Circuito

| Componente | Quantidade | Função |
|---|:---:|---|
| 🟢 **LED** | 6 | Indicador visual de cada andar |
| 🔘 **Botão (Push Button)** | 6 | Chamada do elevador por pavimento |
| **Resistor** | 6 | Proteção dos LEDs e entradas digitais |
| **Protoboard** | 1 | Montagem e interligação do circuito |
| **Arduino UNO** | 1 | Microcontrolador principal |

---

## 🧠 Lógica do Código

A inteligência do elevador está organizada em três pilares:

### 📍 Variável de Estado
```cpp
int andarAtual = 1; // posição atual do elevador (1 a 6)
```
Controla em qual andar o elevador se encontra a qualquer momento do programa.

### ⏱️ Simulação de Deslocamento
```cpp
// acende os LEDs em sequência simulando o movimento
digitalWrite(ledAndar[i], HIGH);
delay(800); // tempo de "viagem" entre andares
digitalWrite(ledAndar[i], LOW);
```
A função `delay()` cria o efeito visual de subida e descida, acendendo cada LED intermediário durante o trajeto.

### 🔀 Controle por `switch/case`
```cpp
switch (andarAtual) {
  case 1:
    // lógica do 1º andar
    break;
  case 2:
    // lógica do 2º andar
    break;
  // ...
  case 6:
    // lógica do 6º andar — adicionado na expansão
    break;
}
```
A estrutura `switch/case` permite adicionar novos andares **sem alterar o comportamento dos existentes** — basta inserir um novo `case`.

---

## 📈 A Expansão: de 3 para 6 Andares

O objetivo central do projeto foi crescer o sistema de forma controlada:

1. **Mapeamento dos novos pinos** → cada andar novo recebe um pino de LED e um de botão
2. **Novos `case` no `switch`** → o comportamento de cada andar é encapsulado no seu bloco
3. **Zero alteração na lógica principal** → a estrutura de controle permaneceu idêntica

Isso demonstra na prática o princípio **Open/Closed** — aberto para extensão, fechado para modificação.

---

## 💡 Conceitos Aplicados

- Programação estruturada em **C/C++ para Arduino**
- **Automação** e controle de hardware via software
- **Sistemas embarcados** e mapeamento de pinos digitais
- Prototipagem virtual com **Tinkercad**
- **Escalabilidade** de software em projetos embarcados
- Uso de **máquina de estados** simples com `switch/case`

---

## 🚀 Como Simular

1. Acesse [tinkercad.com](https://www.tinkercad.com/) e faça login
2. Importe o arquivo do projeto ou monte o circuito conforme o esquemático
3. Cole o código no editor do Tinkercad
4. Clique em **"Iniciar Simulação"**
5. Pressione os botões de cada andar e observe os LEDs respondendo

---

## 📁 Estrutura do Repositório

```
📦 elevador-arduino
 ┣ 📄 elevador.ino       → código principal do Arduino
 ┣ 📄 README.md          → você está aqui
 ┗ 📄 Explicação_Lógica.docx  → documentação do projeto
```

---

## 👨‍💻 Autor

<div align="center">

<br/>

**Vinycius Lopes** · [@VinyciusXZ](https://github.com/VinyciusXZ)

*Técnico em Tecnologia e Inovação Digital · SENAI "A. Jacob Lafer"*

[![Instagram](https://img.shields.io/badge/@vinycius.art-E4405F?style=flat-square&logo=instagram&logoColor=white)](https://instagram.com/vinycius.art)
[![X](https://img.shields.io/badge/@vinyciusart-000000?style=flat-square&logo=x&logoColor=white)](https://x.com/vinyciusart)

<br/>

*Projeto desenvolvido nas Aulas 24 & 25 — Disciplina de IoT com Arduino · 2025*

</div>

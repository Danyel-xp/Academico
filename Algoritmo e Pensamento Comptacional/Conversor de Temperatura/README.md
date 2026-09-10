<div align="center">

# 🌡️ Conversor de Temperatura em C

![C](https://img.shields.io/badge/C-Programming-blue?style=for-the-badge&logo=c)
![Conversões](https://img.shields.io/badge/Conversões-6-orange?style=for-the-badge)
![Terminal](https://img.shields.io/badge/Interface-Terminal-lightgrey?style=for-the-badge)

**Conversor de temperaturas desenvolvido em C para praticar conceitos fundamentais de programação.**

</div>

---

## 📌 Visão Geral

Este projeto consiste em um programa desenvolvido na linguagem **C** capaz de realizar conversões entre as escalas de temperatura **Celsius, Fahrenheit e Kelvin**.

O programa apresenta um menu no terminal, permitindo que o usuário escolha uma das seis conversões disponíveis, informe o valor da temperatura e receba o resultado calculado.

O projeto foi desenvolvido com foco na prática de conceitos básicos da linguagem C, como variáveis, entrada e saída de dados, estrutura `switch` e operações matemáticas.

---

## 🎯 Objetivo

O principal objetivo do projeto é praticar a implementação de operações matemáticas e estruturas de decisão utilizando a linguagem C.

Além disso, o projeto ajuda a desenvolver conhecimentos sobre:

- Declaração e utilização de variáveis;
- Entrada de dados com `scanf`;
- Saída de dados com `printf`;
- Estrutura de decisão `switch`;
- Operações matemáticas;
- Organização básica de um programa em C.

---

## ⚙️ Funcionalidades

O programa possui **6 opções de conversão**:

| Opção | Conversão |
|------:|-----------|
| 1 | Celsius → Fahrenheit |
| 2 | Celsius → Kelvin |
| 3 | Fahrenheit → Celsius |
| 4 | Fahrenheit → Kelvin |
| 5 | Kelvin → Celsius |
| 6 | Kelvin → Fahrenheit |

---

## 🧮 Fórmulas Utilizadas

### Celsius → Fahrenheit

~~~text
°F = (°C × 1,8) + 32
~~~

### Celsius → Kelvin

~~~text
K = °C + 273,15
~~~

### Fahrenheit → Celsius

~~~text
°C = (°F - 32) × 5 / 9
~~~

### Fahrenheit → Kelvin

~~~text
K = (°F + 459,67) × 5 / 9
~~~

### Kelvin → Celsius

~~~text
°C = K - 273,15
~~~

### Kelvin → Fahrenheit

~~~text
°F = 1,8 × (K - 273,15) + 32
~~~

---

## 💻 Conceitos Aplicados

### 📦 Variáveis

O programa utiliza variáveis para armazenar a opção escolhida pelo usuário e os valores utilizados durante as conversões.

A opção escolhida é armazenada em uma variável inteira:

~~~c
int opcao;
~~~

As variáveis de temperatura são declaradas dentro de cada `case`, de acordo com a conversão selecionada.

---

### ⌨️ Entrada de Dados

A função `scanf` é utilizada para receber os valores digitados pelo usuário.

Exemplo:

~~~c
scanf("%f", &celsius);
~~~

O valor informado pelo usuário é armazenado na variável correspondente para que possa ser utilizado no cálculo.

---

### 🖥️ Saída de Dados

A função `printf` é utilizada para apresentar informações no terminal, como:

- Menu de opções;
- Solicitação das temperaturas;
- Resultados das conversões;
- Mensagem de opção inválida.

Exemplo:

~~~c
printf("%.2f° F\n", fahrenheit);
~~~

O resultado é apresentado com **duas casas decimais**.

---

### 🔀 Estrutura `switch`

A estrutura `switch` é utilizada para verificar a opção escolhida pelo usuário e executar a conversão correspondente.

Exemplo:

~~~c
switch (opcao)
{
    case 1:
        // Celsius para Fahrenheit
        break;
}
~~~

Cada `case` representa uma das seis conversões disponíveis.

---

## ⚠️ Tratamento de Opções Inválidas

Caso o usuário informe uma opção diferente das opções disponíveis de **1 a 6**, o programa utiliza o bloco `default` para informar que a opção não é válida.

~~~c
default:
    printf("Opção inválida.\n");
~~~

---

## 🔄 Fluxo do Programa

O funcionamento do programa segue uma sequência simples:

~~~text
Início
  ↓
Exibe o menu de conversões
  ↓
Usuário escolhe uma opção
  ↓
Verifica a opção com switch
  ↓
Solicita a temperatura
  ↓
Realiza o cálculo
  ↓
Exibe o resultado
  ↓
Fim
~~~

---

## 🧠 Estrutura das Conversões

Cada conversão possui uma lógica própria dentro de seu respectivo `case`.

### 1. Celsius para Fahrenheit

O programa recebe uma temperatura em Celsius e aplica a fórmula:

~~~text
°F = (°C × 1,8) + 32
~~~

---

### 2. Celsius para Kelvin

O programa recebe uma temperatura em Celsius e adiciona `273,15`:

~~~text
K = °C + 273,15
~~~

---

### 3. Fahrenheit para Celsius

A conversão utiliza:

~~~text
°C = (°F - 32) × 5 / 9
~~~

---

### 4. Fahrenheit para Kelvin

A fórmula utilizada pelo programa é:

~~~text
K = (°F + 459,67) × 5 / 9
~~~

---

### 5. Kelvin para Celsius

A conversão é realizada subtraindo `273,15`:

~~~text
°C = K - 273,15
~~~

---

### 6. Kelvin para Fahrenheit

O programa utiliza:

~~~text
°F = 1,8 × (K - 273,15) + 32
~~~

---

## ▶️ Como Executar

### Pré-requisitos

Para compilar o projeto, é necessário possuir um compilador da linguagem C.

Uma das opções é o **GCC**.

### Compilação

No terminal, navegue até a pasta onde está localizado o arquivo `.c` e execute:

~~~bash
gcc conversor.c -o conversor
~~~

### Execução no Linux

~~~bash
./conversor
~~~

### Execução no Windows

~~~bash
conversor.exe
~~~

> Caso o arquivo possua outro nome, substitua `conversor.c` pelo nome correto do arquivo.

---

## 🖥️ Exemplo de Funcionamento

Um exemplo de execução do programa:

~~~text
---- Convertor de Termperatura -----

1. Celsius para Fahrenheit
2. Celsius para Kelvin
3. Fahrenheit para Celsius
4. Fahrenheit para Kelvin
5. Kelvin para Celsius
6. Kelvin para Fahrenheit

Escolha uma opção: 1

Digite a temperatura em Celsius: 25

25.00° F
~~~

Nesse exemplo, o usuário escolheu a opção **1**, informou `25°C` e o programa realizou a conversão para Fahrenheit.

---

## 📁 Organização do Projeto

~~~text
.
├── conversor.c
└── README.md
~~~

### Arquivos

**`conversor.c`**

Contém todo o código-fonte do conversor de temperatura.

**`README.md`**

Contém a documentação e as informações sobre o projeto.

---

## 🛠️ Tecnologias Utilizadas

- **C** — Linguagem utilizada no desenvolvimento;
- **GCC** — Compilador utilizado para gerar o executável;
- **Terminal** — Interface utilizada para executar o programa;
- **Git/GitHub** — Controle e hospedagem do projeto.

---




## 👨‍💻 Projeto

Projeto desenvolvido para estudos e prática da linguagem **C**, com foco no desenvolvimento da lógica de programação e utilização de estruturas fundamentais da linguagem.

---

<div align="center">

**Desenvolvido para estudos e prática de programação em C.**

</div>

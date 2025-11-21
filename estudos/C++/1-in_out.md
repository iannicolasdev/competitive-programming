# Entrada e Saída em C++

## Biblioteca iostream

Em C++, funções de entrada e saída só podem ser utilizadas após importar a biblioteca `<iostream>`.

- **io:** input/output (entrada/saída)  
- **stream:** fluxo de dados  

A biblioteca fornece objetos padrão como `std::cout`, `std::cin` e `std::cerr`.

## Saída

**cout (Character Output):** representa a saída padrão.

Usa o operador de **inserção** `<<` para enviar dados ao fluxo.

``` C++
int idade = 25;
std::cout << "Eu tenho " << idade << " anos." << std::endl;
```

- O sinal `<<` serve para indicar que que o compilador deve pegar o que está na direita e jogar para o fluxo da esquerda.

- O C++ sabe que idade é um inteiro, logo o compilador detecta o tipo e chama a função correta para imprimir inteiros automaticamente.

**Nota:** `std::endl` é equivalente ao \n (quebra de linha), mas com uma função extra: ele "limpa o buffer" (flush), garantindo que o texto apareça na tela imediatamente.

## Entrada

**cin (Character Input):** É a entrada. Você extrai dados dele para colocar em suas variáveis.

Usa o operador de **extração** `>>` para receber dados.

``` C++
int numero;
std::cin >> numero;
```

- O sinal `>>` As setas apontam para a variável (numero), indicando que o dado está saindo do fluxo (cin) e indo para a variável.

- A variável é passada internamente por **referência**, então não é necessário usar & (como em C).
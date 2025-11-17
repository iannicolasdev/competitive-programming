# Introdução a C++ 

## Bibliotecas

Para chamar uma biblioteca usamos `#include <nome>` para adicionarmos uma biblioteca ao código fonte. 

Também utilizamos `using namespace std;` para não ter que indicar que estamos usando os nomes padrões em toda chamada de comando.

## Saída

As funções de saída servem para imprimir valores no terminal, ou seja, transmitir informações a partir dele. A função de saída que iremos usar é o **cout** da biblioteca **iostream**, além disso ao final existe o **endl** no final, onde é usado como uma quebra de linha (`"\n"`).

``` cpp
#include <iostream>

using namespace std;

int main () {

    // A estrutura do cout é:
    // cout << valor1 << valor2 << ...;

    cout << 1898 << endl;

    // O espaço com aspas simples é para separar os valores
    cout << 3 << ' ' << 1 << endl;

    // Podemos realizar operações com os números no C++
    // (+, -, /, *, %)

    cout << 2*3*5*7 << endl; 
    
    // Também é possível imprimir frases
    cout << "Olá mundo!" << endl;
}

```

## Variáveis

Variáveis podem ser vistos como pequenos papéis nomeados, onde você pode escrever valores, mudar o valor escrito , ou descobrir qual o valor escrito em um papel apenas buscando-o pelo seu nome. Eles são uma das bases da informática, e servem para guardar dados usados ao longo do programa.

- int – Um número inteiro.

- double – Um número racional, com diversas casas decimais de precisão.

- char – Um caractere, que pode ser qualquer um dos encontrados na tabela ASCII, como letras maiúsculas, minúsculas, símbolos especiais, espaço, números, etc. *Todo valor de char deve ser colocado dentro de aspas simples para indicar que não é o nome de uma variável e sim um valor de caractere.*

- bool – Uma variável booleana, portanto, guarda apenas dois valores: true (1), false (0). Ou seja, são verdadeiras ou falsas.

## Entrada

As funções de entrada e saída são o que permitem receber mensagens do terminal e guardá-las em variáveis, e assim como as de saída, só podem ser chamadas dentro da main, ela também se encontra na biblioteca **iostream**.

``` cpp
#include <iostream>

using namespace std;

int main() {
    int anos_de_trabalho;
    double saldo_bancario;
    
    // o cin funciona assim:
    // cin >> variavel1 >> variavel2 >> ... >> variaveln;
    // Ele recebe todos os valores em ordem, automaticamente pula linhas, espaços, etc,
    // chegando direto no valor desejado
    cin >> anos_de_trabalho >> saldo_bancario;
    
    // Imprimimos a resposta
    cout << saldo_bancario / anos_de_trabalho << endl;
}
```

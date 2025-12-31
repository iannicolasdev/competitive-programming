# Vetores 

Um vetor é uma lista de variáveis do mesmo tipo em que podemos acessá-las pela posição, que vai de 0 até tamanho − 1.

**Sintaxe:**

```cpp
// declarar vetor:
// tipo nome[tamanho];
// acessar valor em uma posição:
// nome[posição]
// Ex.:

int custo[10]; // cria um vetor de valores inteiros de tamanho 10 (posições vão de 0 até 9)
custo[5] = 3; // valor na quinta posição se torna 3
cout << custo[5] << endl; // imprimo o valor na quinta posição
```

## Strings

Existe um tipo especial de vetor, as strings. Elas são vetores exclusivamente de caracteres, com funcionalidades especiais, pois são tratadas como um outro tipo de variável.
 
Para usar as strings é necessário importar a biblioteca `string`. 

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Para declarar uma string:
  // string nome; ou string nome = "frase"; 
  string om = "Ola ";
  
  // Você pode dar cin em strings! (sem espaços)
  string nome;
  cin >> nome; // ENTRADA: Enzo
  
  // É possível concatenar strings (juntar elas) usando o operador da soma (+)
  // Não pode juntar dois valores entre aspas diretamente
  // string om = "Ola " + "mundo!"; <- Retorna erro
  om += "mundo!"; // Funciona!
  // Também é possível concatenar string com um char
  
  // Você pode concatenar duas variáveis também
  string sobrenome = "Dantas";
  nome += " " + sobrenome; // nome vira: Enzo Dantas
  
  // Você pode descobrir o tamanho de uma string usando a função .size()
  cout << nome.size() << "\n"; // SAÍDA: 11
  
  // Da mesma forma que você acessa as posições nos vetores, você também pode nas strings (o tipo é char)
  cout << nome[2] << "\n"; // SAÍDA: z
  
  // Por fim, é possível imprimir strings da mesma forma que você imprime qualquer outra variável
  cout << om << "\n"; // SAÍDA: Ola mundo!
} 
```
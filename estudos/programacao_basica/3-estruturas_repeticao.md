# Estruturas de Repetição

## Operadores de Atribuição

Os operadores de atribuição representam uma forma mais simples de incrementar o valor de uma variável, ao invés de usar `x = x + 1`, usamos `x += 1`, além disso há outros métodos de atribuição:

- x = x - y → x -= y
- x = x * y → x *= y
- x = x / y → x /= y
- x = x % y → x %= y

No caso específico de adicionar 1 ou subtrair 1 de uma variável também existem outros tipos de operadores.

- x++ / ++x
- x-- / --x

A ordem dos sinais não altera o resultado, apenas a visualização onde o `++` estando depois da variável primeiro ele exibe e depois incrementa.

## While

O `while` se traduz para **enquanto**, e é utilizado quando se quer repetir uma ação enquanto uma condição for verdadeira. Essa é sua estrutura básica:

```cpp
while (condição) {
  // código a ser executado enquanto a condição é verdadeira
}
```

Contando de 1 até 10:

```cpp 
int n = 1;

while (n <= 10) {
    cout << n << "\n";
    i++;
}
// SAÍDA: 1 2 3 4 5 6 7 8 9 10
```

## For

O loop for serve para deixar o código mais conciso em alguns casos específicos, e também códigos onde uma inicialização é necessária, juntamente da condição e atualização, tudo em uma única linha. Essa é sua estrutura básica:

```cpp
for(inicialização; condição; atualização){
  // código executado enquanto a condição é verdadeira
}
```

Contando de um até 10

```cpp
int n = 10;

for (int i = 1; i <= n; i++) {
    cout << i << "\n";
}
// SAÍDA: 1 2 3 4 5 6 7 8 9 10
```

## Comandos de Controle do Loop

Esses dois comandos servem para controlar o loop durante sua execução, e geralmente aparecem dentro de estruturas condicionais para em alguns casos específicos interromper o loop ou pular uma iteração. Ambos podem ser utilizados tanto no while quanto no for.

### Break

Quando o comando `break` é encontrado dentro de um loop, ele interrompe imediatamente a execução desse loop e o programa continua a partir do próximo comando após o loop.

```cpp
for (int i = 0; i < 10; i++) {
if (i == 5) {
    break;
}
cout << i << " ";
}
// SAÍDA: 0 1 2 3 4 
```

### Continue
O comando continue é usado para pular a iteração atual do loop e continuar com a próxima iteração, ignorando o restante do código dentro do loop para a iteração atual.

```cpp
for (int i = 0; i < 10; ++i) {
    if (i == 5) {
        continue; // pula a iteração quando i é igual a 5
    }
    cout << i << " ";
}
// Saída: 0 1 2 3 4 6 7 8 9
```
# Estruturas Condicionais 

As estruturas condicionais podem ser definidas como as escolhas que serão tomadas no decorrer do código, que irá decidir por onde o fluxo do código deve prossegir. Elas são dadas por alguns operadores bem conhecidos no mundo da programação, são eles o `if` e o `else`.

## Operadores de Comparação 

Em programação, os operadores de comparação são ferramentas essenciais para avaliar condições. Em C++, usamos esses operadores para comparar valores e tomar decisões com base nesses resultados. Eles nos permitem verificar se duas expressões são iguais, diferentes, maiores, menores ou atendem a outras condições específicas.

- **== (igual a):** Verifica se dois valores são iguais.
- **!= (diferente de):** Verifica se dois valores são diferentes.
- **< (menor que):** Verifica se o valor à esquerda é menor que o valor à direita.
- **> (maior que):** Verifica se o valor à esquerda é maior que o valor à direita.
- **<= (menor ou igual a):** Verifica se o valor à esquerda é menor ou igual ao valor à direita.
- **>= (maior ou igual a):** Verifica se o valor à esquerda é maior ou igual ao valor à direita.

## Sintaxe 

A sintaxe básica de um `if` em C++ é:

``` cpp
if (condicao) {
    // o código dentro das chaves é executado caso a expressão
    // dentro dos parênteses seja verdadeira (diferente de zero)
}
```

Exemplos:

``` cpp
double nota;
cin >> nota;
if (nota >= 7) {
    cout << "Aprovado\n";
}
if (nota < 7) {
    cout << "Reprovado\n";
}
```

---

Além do `if` existe o `else` e o `else if`.

- **Else if:** É utilizado quando existem mais condições.
- **Else:** É utilizado como ultima condição. 

``` cpp
int numero;
if (numero > 0) {
    cout << "Positivo";
} else if (numero < 0) {
    cout << "Negativo";
} else {
    cout << "Zero";
}
```

## Operadores lógicos

Os operadores lógicos são usados para combinar e modificar expressões booleanas, existem três principais:

- **&& (AND):** Retorna `true` se as duas expressões forem **verdadeiras** e `false` se ao menos uma for **falsa**.
- **|| (OR):** Retorna `true` se ao menos uma for **verdadeira** e `false` se as duas expressões forem **falsas**.
- **! (NOT):** Inverte o valor lógico.
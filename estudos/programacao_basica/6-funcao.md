# Funções 

As funções são blocos de código que executam uma determinada função, alguns exemplos usados na linguagem C é ``printf()`` e ``scanf()``, elas são funções genéricas. 

Para utilizar uma dessas funções genericas utilizamos o nome dela juntamente com os parametros que elas precisam para poderem funcionar, no caso do ``scanf()`` os paramentros são uma string e em seguida uma série de ponteiros, ou seja, endereços de memória.

Assim como podemos declarar variáveis, também podemos declarar funções. Elas devem ser declaradas fora da main, pois não podemos declarar uma função dentro de outra. Vale lembrar, também, que elas devem ser declaradas antes da main, pois o computador executa comandos na ordem que lê e, assim como com as variáveis, não podemos chamar uma função sem antes declará-la.

- Estrutura básica para criação de uma função se inicia com o tipo de dado que ela irá retornar, em seguida do nome da função e os parametros

Como neste caso:
```cpp
int soma(int n1, int n2) {
    return n1 + n2;
}
```

- Para chamar a função devemos usar o nome definido para ela e passar os **argumentos** que serão utilizados como paramentros dentro da função.

Como neste caso:

```cpp
int a, b, ab;

ab = soma(a, b);
```
- Existem funções que não retornam nada, para isso o tipo da função deverá ser ``void``, e não há a necessidade de atribuir a função void a uma variável na função main.

---

## Recursividade

É importante saber que, dentro de uma função, podemos fazer qualquer coisa, exceto declarar outra função, como declarar e chamar variáveis, usar if e for e, até, chamar outras funções que já tenhamos declarado, **inclusive ela mesma!** Quando isso ocorre (uma função chama a si mesma), dizemos que é uma **função recursiva**.
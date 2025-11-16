#include <stdio.h>

int main () {

    int a, n, div;

    scanf("%d", &a);
    scanf("%d", &n);

    div = a / (n + 2);

    printf("%d", div * 2);

    return 0;
}
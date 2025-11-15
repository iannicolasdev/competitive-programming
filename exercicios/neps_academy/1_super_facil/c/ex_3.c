#include <stdio.h>

int main () {

    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    int dif = m - n;

    printf("%d", m + dif);

    return 0;
}
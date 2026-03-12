// Exercício: Função Fatorial
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/174

#include <iostream>

using namespace std;

int fatorial(int n) {
    int c = 1;
    for (int i = n; i > 1; i--) c *= i;

    return c;
}

int main(){
    int n, result;
    cin >> n;

    result = fatorial(n);

    cout << result;

    return 0;
}
// Exercício: Todos os Divisores
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/216

#include <iostream>

using namespace std;

int main(){
    int X;

    cin >> X;

    for (int i = 1; i <= X; i++) if (X % i == 0) cout << i << " ";

    return 0;
}
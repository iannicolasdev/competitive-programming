// Exercício: Positivo, Negativo ou Nulo
// Dificuldade: Super Fácil
// Link: https://neps.academy/br/exercise/145

#include <iostream>

using namespace std;

int main(){

    int x;

    cin >> x;

    if (x > 0) cout << "positivo";
    if (x < 0) cout << "negativo";
    if (x == 0) cout << "nulo";

    return 0;
}
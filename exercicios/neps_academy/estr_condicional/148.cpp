// Exercício: Par ou Ímpar
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/148

#include <iostream>

using namespace std;

int main(){
    int B, C;

    cin >> B >> C;

    if ((B + C) % 2 == 0) cout << "Bino";
    else cout << "Cino";

    return 0;
}
// Exercício: Escolha Difícil
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/103

#include <iostream>

using namespace std;

int main(){
    int C, B, P;
    int X, Y, Z;
    int resultado = 0;

    cin >> C >> B >> P >> X >> Y >> Z;

    if (X > C) resultado += X - C;
    if (Y > B) resultado += Y - B;
    if (Z > P) resultado += Z - P;

    cout << resultado;

    return 0;
}
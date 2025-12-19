// Exercício: A Idade de Dona Mônica
// Dificuldade: Fácil 
// Link: https://neps.academy/br/exercise/463

#include <iostream>

using namespace std;

int main(){
    int M, A, B;

    cin >> M >> A >> B;

    int C = M - (A + B);

    if (A > B && A > C) cout << A;
    if (B > A && B > C) cout << B;
    if (C > A && C > B) cout << C;

    return 0;
}
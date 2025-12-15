// Exercício: Zerinho ou Um
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/88

#include <iostream>

using namespace std;

int main(){
    int A, B, C;

    cin >> A >> B >> C;

    if (A == B && B == C) cout << "*";
    if (A != B && A != C) cout << "A";
    if (B != A && B != C) cout << "B";
    if (C != A && C != B) cout << "C";

    return 0;
}
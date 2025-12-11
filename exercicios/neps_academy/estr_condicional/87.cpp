// Exercício: Flíper
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/87

#include <iostream>

using namespace std;

int main(){

    int P, R;

    cin >> P >> R;

    if (P == 0) cout << "C";
    if (P == 1 && R == 0) cout << "B";
    if (P == 1 && R == 1) cout << "A";

    return 0;
}
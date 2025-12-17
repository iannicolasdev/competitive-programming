// Exercício: Overflow
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/225

#include <iostream>

using namespace std;

int main(){
    int N, P, Q;
    char C;

    cin >> N >> P >> C >> Q;

    if (C == '*') {
        if (P * Q > N) cout << "OVERFLOW";
        else cout << "OK";
    }

    if (C == '+') {
        if (P + Q > N) cout << "OVERFLOW";
        else cout << "OK";
    }

    return 0;
}
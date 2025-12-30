// Exercício: Campo Minado
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/241

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int CM[N];

    for (int i = 0; i < N; i++) cin >> CM[i];

    for (int i = 0; i < N; i++) {
        int contador = 0;

        if (i > 0) contador += CM[i - 1];

        contador += CM[i];

        if (i < N - 1) contador += CM[i + 1];

        cout << contador << "\n";
    }

    return 0;
}
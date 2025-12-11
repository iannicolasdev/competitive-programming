// Exercício: Código (OBI 2015)
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/47

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int contador = 0;
    int codigo[N];

    for (int i = 0; i < N; i++) {
        cin >> codigo[i];
    }

    for (int i = 0; i < N - 2; i++) {
        if (codigo[i] == 1 && codigo[i + 1] == 0 && codigo[i + 2] == 0) contador++;
    }
    
    cout << contador;

    return 0;
}
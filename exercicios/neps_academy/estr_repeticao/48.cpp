// Exercício: Prêmio do Milhão
// Dificuldade: Fácil 
// Link: https://neps.academy/br/exercise/48

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int soma = 0;
    int acessos[N];

    for (int i = 0; i < N; i++) {
        cin >> acessos[i];
        soma += acessos[i];

        if (soma >= 1000000) {
            cout << i + 1;
            break;
        } 
    }

    return 0;
}
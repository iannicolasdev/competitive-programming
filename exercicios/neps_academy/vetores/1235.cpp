// Exercício: Busca Simples no Vetor
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/1235

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++) cin >> v[i];

    int x;
    cin >> x;

    bool possui = false;

    for (int i = 0; i < n; i++) {
        if (v[i] == x) possui = !possui;
    }

    if (possui == true) cout << "pertence";
    else cout << "nao_pertence";

    return 0;
}
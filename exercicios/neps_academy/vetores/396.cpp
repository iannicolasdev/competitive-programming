// Exercício: Busca Simples no Vetor 02
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/396

#include <iostream>

using namespace std;

int main(){
    int x, n = 0;
    int v[10];

    for (int i = 0; i < 10; i++) cin >> v[i];
    
    cin >> x;
    
    for (int i = 0; i < 10; i++) if (v[i] == x) n++;
    
    if (n > 0) {
        cout << n << "\n";

        for (int i = 0; i < 10; i++) if (v[i] == x) cout << i << " ";

    }
    else cout << "Mia x" << "\n";

    return 0;
}
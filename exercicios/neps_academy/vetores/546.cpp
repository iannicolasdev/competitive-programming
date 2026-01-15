// Exercício: Lista de Chamada
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/546

#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    string v[n];

    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                string temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    cout << v[k - 1];

    return 0;
}
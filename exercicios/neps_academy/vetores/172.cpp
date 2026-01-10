// Exercício: Maior e Menor
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/172

#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++) cin >> v[i];
    
    int M = v[0];
    int m = v[0];
    
    for (int i = 0; i < n; i++) {
        if (v[i] > M) M = v[i];
        if (v[i] < m) m = v[i];
    }
    
    cout << M << "\n" << m;

    return 0;
}
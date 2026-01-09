// Exercício: Ordenação de Três Números
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/151

#include <iostream>

using namespace std;

int main(){
    int v[3];
    
    for (int i = 0; i < 3; i++) cin >> v[i];
    
    int M = v[2], m = v[2], Md = v[2];

    for (int i = 0; i < 3; i++) {
        if (v[i] < m) m = v[i];
        if (v[i] > M) M = v[i];
    }
    
    for (int i = 0; i < 3; i++) if (v[i] != m && v[i] != M) Md = v[i];

    cout << m << "\n" << Md << "\n" << M;

    return 0;
}
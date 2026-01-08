// Exercício: Dois Vetores: Pares e Ímpares
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/194

#include <iostream>

using namespace std;

int main(){
    int v[10];

    for (int i = 0; i < 10; i++) cin >> v[i];
    
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) cout << v[i] << " ";
        
    }

    cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) cout << v[i] << " ";
        
    }

    return 0;
}
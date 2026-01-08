// Exercício: Inverso
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/187

#include <iostream>

using namespace std;

int main(){
    int numeros[10];

    for (int i = 0; i < 10; i++) cin >> numeros[i];
    
    for (int i = 9; i >= 0; i--) cout << numeros[i] << "\n";
    
    return 0;
}
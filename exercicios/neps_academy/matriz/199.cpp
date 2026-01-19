// Exercício: Soma das Linhas de Matriz 3x3
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/199

#include <iostream>

using namespace std;

int main(){
    int v[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }    
    }

    for (int i = 0; i < 3; i++) {
        int soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += v[i][j];
        }    
        cout << "Linha " << i << ": " << soma << "\n";
    }
    

    return 0;
}
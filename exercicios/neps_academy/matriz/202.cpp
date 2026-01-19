// Exercício: Substituir o Maior em Matriz 3x3
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/202

#include <iostream>

using namespace std;

int main(){
    int v[3][3];

    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> v[i][j];
    
    int m = v[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (v[i][j] > m) m = v[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (v[i][j] == m) v[i][j] = -1;
        }
    } 
     
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << v[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
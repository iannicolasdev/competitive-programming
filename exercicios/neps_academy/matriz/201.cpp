// Exercício: Soma das Diagonais da Matriz 3x3
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/201

#include <iostream>

using namespace std;

int main(){
    int m[3][3];
    int dp = 0;
    int ds = 0;

    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> m[i][j];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) dp += m[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        int j = 3 - 1 - i;
        ds += m[i][j];
    }

    cout << "Diagonal principal: " << dp << "\n" << "Diagonal secundaria: " << ds;

    return 0;
}
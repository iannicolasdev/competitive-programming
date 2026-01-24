// Exercício: Determinante da Matriz
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/322

#include <iostream>

using namespace std;

int main(){
    int m[3][3];
    int dp, ds;

    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> m[i][j];
    
    dp = (m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m[2][0]) + (m[0][2] * m[1][0] * m[2][1]);

    ds = (m[0][2] * m[1][1] * m[2][0]) + (m[0][0] * m[1][2] * m[2][1]) + (m[0][1] * m[1][0] * m[2][2]);

    cout << dp - ds;

    return 0;
}
// Exercício: Quadrado Mágico 3x3
// Dificuldade: Médio
// Link: https://neps.academy/br/exercise/198

#include <iostream>

using namespace std;

int main(){
    int m[3][3];
    int l1, l2, l3, c1, c2, c3, d1, d2;

    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> m[i][j];
    
    for (int j = 0; j < 3; j++) l1 += m[0][j];
    for (int j = 0; j < 3; j++) l2 += m[1][j];
    for (int j = 0; j < 3; j++) l3 += m[2][j];

    for (int i = 0; i < 3; i++) c1 += m[i][0];
    for (int i = 0; i < 3; i++) c2 += m[i][1];
    for (int i = 0; i < 3; i++) c3 += m[i][2];

    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++)
            if (i == j) d1 += m[i][j];

    for (int i = 0; i < 3; i++) {
        int j = 3 - 1 - i;
        d2 += m[i][j];
    }

    if (l1 == l2 && l1 == l3 && l1 == c1 && l1 == c2 && l1 == c3 && l1 == d1 && l1 == d2) cout << "SIM";
    else cout << "NAO";

    return 0;
}
// Exercício: Gangorra
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/260

#include <iostream>

using namespace std;

int main(){
    
    int P1, C1, P2, C2;

    cin >> P1 >> C1 >> P2 >> C2;

    if (P1 * C1 == P2 * C2) cout << "0";
    if (P1 * C1 > P2 * C2) cout << "-1";
    if (P1 * C1 < P2 * C2) cout << "1";

    return 0;
}
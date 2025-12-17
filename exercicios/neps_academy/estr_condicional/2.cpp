// Exercício: Medalhas
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/2

#include <iostream>

using namespace std;

int main(){
    int T1, T2, T3;

    cin >> T1 >> T2 >> T3;

    // A B C
    if (T1 < T2 and T2 < T3) cout << 1 << "\n" << 2 << "\n" << 3;
    
    // A C B
    if (T1 < T3 and T3 < T2) cout << 1 << "\n" << 3 << "\n" << 2;
    
    // B A C
    if (T2 < T1 and T1 < T3) cout << 2 << "\n" << 1 << "\n" << 3;
    
    // B C A
    if (T2 < T3 and T3 < T1) cout << 2 << "\n" << 3 << "\n" << 1;
    
    // C A B
    if (T3 < T1 and T1 < T2) cout << 3 << "\n" << 1 << "\n" << 2;
    
    // C B A
    if (T3 < T2 and T2 < T1) cout << 3 << "\n" << 2 << "\n" << 1;

    return 0;
}
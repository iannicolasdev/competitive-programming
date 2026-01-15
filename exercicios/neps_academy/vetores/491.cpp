// Exercício: Loteria
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/491

#include <iostream>

using namespace std;

int main(){
    int a[6];
    int b[6];

    for (int i = 0; i < 6; i++) cin >> a[i];
    for (int i = 0; i < 6; i++) cin >> b[i];
    
    int c = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (a[i] == b[j]) c++;
        }        
    }
    
    if (c == 6) cout << "sena";
    else if (c == 5) cout << "quina";
    else if (c == 4) cout << "quadra";
    else if (c == 3) cout << "terno";
    else cout << "azar";

    return 0;
}
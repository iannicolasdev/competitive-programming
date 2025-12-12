// Exercício: Fatorial
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/158

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int fatorial = N;

    if (N == 0) cout << 1;
    else {
        for (int i = N - 1; i > 1; i--) fatorial *= i;

        cout << fatorial;
    }
    
    return 0;
}
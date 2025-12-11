// Exercício: Lâmpadas
// Dificuldade: Médio
// Link: https://neps.academy/br/exercise/52

#include <iostream>

using namespace std;

int main(){
    
    int N;
    bool l1 = false, l2 = false;

    cin >> N;
    int quantidade[N];

    for (int i = 0; i < N; i++) cin >> quantidade[i];
    
    for (int i = 0; i < N; i++) {
        if (quantidade[i] == 1) l1 = !l1;
        if (quantidade[i] == 2) {
            l1 = !l1;
            l2 = !l2;
        }
    }

    cout << l1 << "\n" << l2;
    
    return 0;
}
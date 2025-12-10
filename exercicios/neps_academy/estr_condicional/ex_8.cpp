// Exercício: Garçom
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/324

#include <iostream>

using namespace std;

int main(){
    int N;
    int quebrados = 0;

    cin >> N;

    int tam = N * 2;
    int bandejas[tam];
    
    for (int i = 0; i < tam; i++) cin >> bandejas[i];

    for (int i = 1; i < tam; i += 2) if (bandejas[i] < bandejas[i - 1]) quebrados += bandejas[i];

    cout << quebrados;

    return 0;
}
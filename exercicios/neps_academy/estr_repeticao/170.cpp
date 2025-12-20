// Exercício: Raízes
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/170

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    int N;
    cin >> N;

    float numeros[N];

    for (int i = 0; i < N; i++) cin >> numeros[i]; 

    for (int i = 0; i < N; i++) printf("%.4f\n", pow(numeros[i], 0.5));
    
    return 0;
}
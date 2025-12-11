// Exercício: Soma dos Elementos
// Dificuldade: Super fácil
// Link: https://neps.academy/br/exercise/159

#include <iostream>

using namespace std;

int main(){
    int N, X; 
    int soma = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        soma += X;
    }
    
    cout << soma;

    return 0;
}
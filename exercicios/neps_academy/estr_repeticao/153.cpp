// Exercício: Senha 2018
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/153

#include <iostream>

using namespace std;

int main(){
    int N;
    int erros = 0;

    while (N != 2018){
        cin >> N;
        erros++;
    }

    cout << erros - 1;
    
    return 0;
}
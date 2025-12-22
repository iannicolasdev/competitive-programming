// Exercício: Busca Simples no Vetor 01
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/cpp

#include <iostream>

using namespace std;

int main(){
    int X;
    bool possui = false;
    int numeros[10];

    for (int i = 0; i < 10; i++) cin >> numeros[i];
    
    cin >> X;
    
    for (int i = 0; i < 10; i++){
        
        if (numeros[i] == X){
            possui = true; 
            break;
        }
    }

    if (possui) cout << "SIM";
    else cout << "NAO";

    return 0;
}
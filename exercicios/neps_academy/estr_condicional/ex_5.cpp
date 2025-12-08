// Exercício: Aprovado ou Reprovado
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/86

#include <iostream>

using namespace std;

int main(){
    
    float A, B;

    cin >> A >> B;

    if ((A + B) / 2 >= 7.0) cout << "Aprovado";
    if ((A + B) / 2 >= 4.0 && (A + B) / 2 < 7) cout << "Recuperacao";
    if ((A + B) / 2 < 4.0) cout << "Reprovado";

    return 0;
}
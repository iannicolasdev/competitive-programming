// Exercício: Reprovado, Aprovado ou Final.
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/147

#include <iostream>

using namespace std;

int main(){
    float N1, N2;

    cin >> N1 >> N2;

    float media = ((N1 * 2) + (N2 * 3)) / 5; 

    if (media >= 7) cout << "Aprovado";
    else if (media < 3) cout << "Reprovado";
    else cout << "Final";

    return 0;
}
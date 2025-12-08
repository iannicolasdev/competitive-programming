// Exercício: Bondinho
// Dificuldade: Super Fácil
// Link: https://neps.academy/br/exercise/13

#include <iostream>

using namespace std;

int main(){

    int A, M;

    cin >> A >> M;

    if ((A + M) > 50) cout << "N";
    if ((A + M) <= 50) cout << "S";

    return 0;
}
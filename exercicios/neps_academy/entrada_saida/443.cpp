// Exercício: Hora da Corrida
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/443

#include <iostream>
using namespace std;

int main(){
    long long V, N;
    cin >> V >> N;

    long long totalPlacas = V * N;

    for (int i = 10; i <= 90; i += 10) {
        long long placas = (totalPlacas * i + 99) / 100;
        cout << placas << " ";
    }

    return 0;
}
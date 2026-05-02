// Exercício: Cofrinhos da Vó Vitória
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/635

#include <iostream>

using namespace std;

int main(){ 
    int N;
    cin >> N;

    int teste = 1;

    while (N != 0) {

        cout << "Teste " << teste << "\n";

        int J[N];
        int Z[N];

        int totalJ = 0;
        int totalZ = 0;

        for (int i = 0; i < N; i++) {
            cin >> J[i] >> Z[i];
        }

        for (int i = 0; i < N; i++) {
            totalJ += J[i]; 
            totalZ += Z[i];

            cout << totalJ - totalZ << "\n";
        }

        teste++;
        cin >> N;
    }

    return 0;
}
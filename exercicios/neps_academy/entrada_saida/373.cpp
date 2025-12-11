// Exercício: Bolas
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/373

#include <iostream>

using namespace std;

int main(){
    int contador[9] = {0};
    int n;
    bool resultado = true;
    
    for(int i = 0; i < 8; i++){
        cin >> n;
        contador[n]++;
        if (contador[n] > 4) resultado = false;
    }

    if (resultado) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}

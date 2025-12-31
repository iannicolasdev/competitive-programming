// Exercício: Vogais e Consoantes
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/399

#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    string CON = "";
    string VOG = "";

    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') VOG += S[i];
        else CON += S[i];
    }

    cout << "Vogais: " << VOG << "\n";
    cout << "Consoantes: " << CON;

    return 0;
}
// Exercício: Caravana
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/2171

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int v[n];
    int m = 0; 

    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int i = 0; i < n; i++) m += v[i];
    
    m = m / n;
    
    for (int i = 0; i < n; i++) cout << m - v[i] << "\n";



    return 0;
}
// Exercício: Função Primo
// Dificuldade: Fácil
// Link: https://neps.academy/br/exercise/175

#include <iostream>

using namespace std;

bool eh_primo(int x){
    int c = 0;

    for (int i = 1; i <= x; i++) {
        if (x % i == 0) c++;
        if (c > 2) break;
    }

    if (c == 2) return true;
    return false;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL,"portuguese");
    int codigo;

    cout << "Digite o c�digo do produto: ";
    cin >> codigo;

    if (codigo == 1) {
        cout << "Classifica��o: Alimento n�o-perec�vel" << endl;
    } else if (codigo == 2 || codigo == 3 || codigo == 4) {
        cout << "Classifica��o: Alimento perec�vel" << endl;
    } else if (codigo == 5 || codigo == 6) {
        cout << "Classifica��o: Vestu�rio" << endl;
    } else if (codigo == 7) {
        cout << "Classifica��o: Higiene Pessoal" << endl;
    } else if (codigo >= 8 && codigo <= 15) {
        cout << "Classifica��o: Limpeza e Utens�lios Dom�sticos" << endl;
    } else {
        cout << "C�digo inv�lido!" << endl;
    }

    return 0;
}


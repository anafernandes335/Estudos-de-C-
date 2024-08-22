#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL,"portuguese");
    int codigo;

    cout << "Digite o código do produto: ";
    cin >> codigo;

    if (codigo == 1) {
        cout << "Classificação: Alimento não-perecível" << endl;
    } else if (codigo == 2 || codigo == 3 || codigo == 4) {
        cout << "Classificação: Alimento perecível" << endl;
    } else if (codigo == 5 || codigo == 6) {
        cout << "Classificação: Vestuário" << endl;
    } else if (codigo == 7) {
        cout << "Classificação: Higiene Pessoal" << endl;
    } else if (codigo >= 8 && codigo <= 15) {
        cout << "Classificação: Limpeza e Utensílios Domésticos" << endl;
    } else {
        cout << "Código inválido!" << endl;
    }

    return 0;
}


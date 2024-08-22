#include <iostream>
#include <string>

using namespace std; 

int main() {
	
	setlocale (LC_ALL,"portuguese");
	
	double altura;
	string genero;
	double pesoideal; 
	
	cout << "Digite sua altura em metros: ";
	cin >> altura;
	cout << "Digite seu genero (entre m ou f): ";
	cin >> genero;
	
	if (genero == "f") {
	double pesoideal = (62.1*altura)-44.7;
	cout << "Seu peso ideal é de: " << pesoideal << "kg!" << endl;
	}
	
	else if (genero == "m") {
	double pesoideal = (72.7*altura)-58;
	cout << "Seu peso ideal é de: " << pesoideal << "kg!" << endl;
	}
	
	else {
		cout << "Invalido!" << endl;
	}
	
	return 0;
		
}

#include <iostream>

using namespace std;

int main() {
	double salario;
	
	cout << "Digite seu salario: R$ ";
	cin >> salario;
	
	if (salario <= 280) {
		double porcentual = 0.20;
		double novosalario = (salario*0.20);
		double valoraumento = salario - (salario*0.20);
		cout << "Salario antes do reajuste: " << salario << "R$" << endl;
		cout << "Percentual do salario: " << porcentual << "%" << endl;
		cout << "Valor do aumento: " << valoraumento << "R$" << endl;
		cout << "Novo salario = " << novosalario << "R$" << endl;
	}
		
	else if (salario >= 280 || salario <=700) {
		double porcentual = 0.15;
		double novosalario = (salario*0.15);
		double valoraumento = salario - (salario*0.15);
		cout << "Salario antes do reajuste: " << salario << "R$" << endl;
		cout << "Percentual do salario: " << porcentual << "%" << endl;
		cout << "Valor do aumento: " << valoraumento << "R$" << endl;
		cout << "Novo salario = " << novosalario << "R$" << endl;
		}
	
	else if (salario >=700 || salario <= 1500){
		double porcentual = 0.10;
		double novosalario = (salario*0.10);
		double valoraumento = salario - (salario*0.10);
		cout << "Salario antes do reajuste: " << salario << "R$" << endl;
		cout << "Percentual do salario: " << porcentual << "%" << endl;
		cout << "Valor do aumento: " << valoraumento << "R$" << endl;
		cout << "Novo salario = " << novosalario << "R$" << endl;
		}
	
	else if (salario >= 1500) {
		double porcentual = 0.05;
		double novosalario = (salario*0.05);
		double valoraumento = salario - (salario*0.05);
		cout << "Salario antes do reajuste: " << salario << "R$" << endl;
		cout << "Percentual do salario: " << porcentual << "%" << endl;
		cout << "Valor do aumento: " << valoraumento << "R$" << endl;
		cout << "Novo salario = " << novosalario << "R$" << endl;
		}

	return 0;
}

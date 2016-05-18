#include <iostream>

int main()
{
	Cilindro cilindro;
	double diametro_base;

	cout << " ## Calculadora de volume ##";
	cout << " ## Inserir Informacoes   ##" << endl;
	cout << " \t -> Diametro da base: ";
	cin >> diametro_base;
	cout << " \t -> Altura do Cilindro: "
	cin >> cilindro.altura;

	cilindro.areaBase();
};
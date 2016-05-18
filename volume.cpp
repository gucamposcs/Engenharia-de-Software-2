#include <iostream>
#include <cmath>

using namespace std;

double CalcularAreaBase           (double diametro);
double CalcularVolumeCilindro     (double area_base, double altura);
double CalcularAreaLateralCilindro(double diametro, double altura);
double CalcularAreaTotalCilindro  (double area_lateral, double area_base);


int main()
{
	double diametro_base, 
		   altura_cilindro,
		   area_base,
		   volume_cilindro,
		   area_lateral_cilindro,
		   area_total_cilindro;
	int criterio_saida = 0;
	
	while(criterio_saida != 1)
	{
		system("clear");
		cout << " ## Calculadora de Volume ## \n" << endl;
		cout << " ## Inserir informações   ## \n" << endl;
		cout << " \t -> Diametro da base: ";
		cin >> diametro_base;
		cout << " \n\t -> Altura cilindro: ";
		cin >> altura_cilindro;

		if(diametro_base < 0 || altura_cilindro < 0)
		{
			cout << " Valor inserido menor que zero, invalido, o sistema sera abortado. " << endl;
			break;
		};

		area_base       = CalcularAreaBase(diametro_base);
		volume_cilindro = CalcularVolumeCilindro(area_base, altura_cilindro);
		area_lateral_cilindro = CalcularAreaLateralCilindro(diametro_base, altura_cilindro);
		area_total_cilindro = CalcularAreaTotalCilindro(area_lateral_cilindro, area_base);

		cout << "\n";
		cout << " ## Resultados ##\n";
		cout << " \t **Volume: " << volume_cilindro;
		cout << " \n\t **Area lateral do cilindro: " << area_lateral_cilindro;
		cout << " \n\t **Area total do cilindro: " << area_total_cilindro;
		cout << " \n\t **Area Base: " << area_base << endl;

		cout << "\n Novo calculo? 0 - Sim || 1 - Nao \n -> ";
		cin >> criterio_saida;
	};
};

double CalcularAreaBase(double diametro)
{
	double raio = diametro/2;
	return M_PI * (raio*raio);
};

double CalcularVolumeCilindro(double area_base, double altura)
{
	return area_base * altura;	
};

double CalcularAreaLateralCilindro(double diametro, double altura)
{
	double raio = diametro/2;
	return 2 * M_PI * raio * altura;
};

double CalcularAreaTotalCilindro(double area_lateral, double area_base)
{
	return (area_lateral + 2 * area_base);
};


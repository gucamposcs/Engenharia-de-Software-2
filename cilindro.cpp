#include <iostream>
#include <cmath>

Cilindro::Cilindro()
{
	this->areaBase = 0.00;
	this->altura = 0.00;
};

double Cilindro::VolumeCilindro() const
{
	return this->areaBase * this->altura;
};

double Cilindro::AreaLateralCilindro(double diametro) const
{
	double raio = diametro/2;
	return 2 * M_PI * raio * altura;
};

double Cilindro::AreaTotalCilindro(double areaLateral) const
{
	return areaLateral + (2 * (this->areabase));
};

double Cilindro::areaBase(double diametro) const
{
	double raio = diametro/2;
	return M_PI * (raio*raio);
};

double Cilindro::getAreaBase()
{
	return this->areaBase;
};
void Cilindro::setAreaBase(double newAreaBase)
{
	this->areaBase = newAreaBase;
};

double Cilindro::getAltura()
{
	return this->altura;
};
void Cilindro::setAreaBase(double newAltura)
{
	this->altura = newAltura;
};
#ifndef CILINDRO_HPP
	#define CILINDRO_HPP

class Cilindro
{
	private:
		double areaBase;
		double altura;
	public:
		
		cilindro();

		double getAreaBase();
		void setAreaBase(double newAreaBase);
		
		double getAltura();
		void setAreaBase(double newAltura);
		
		double CalcularVolumeCilindro() const;
		double CalcularAreaLateralCilindro(double diametro) const;
		double CalcularAreaTotalCilindro(double diametro) const;
		double CalcularAreaBase(double diametro) const;
};

#endif
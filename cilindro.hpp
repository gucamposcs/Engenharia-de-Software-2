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
		
		double VolumeCilindro() const;
		double AreaLateralCilindro(double diametro) const;
		double AreaTotalCilindro(double diametro) const;
		double AreaBase(double diametro) const;
};

#endif
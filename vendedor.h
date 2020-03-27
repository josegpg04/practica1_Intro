#ifndef VENDEDOR_H
#define VENDEDOR_H

class vendedor
{
	private:
		int cedula;
		float sueldoBase;
		float montoVentas;
	public:
		vendedor();
		int getCedula();
		void setCedula (int ced);
		float getSueldoBase();
		void setSueldoBase(float sB);
		float getMontoVentas();
		void setMontoVentas(float mV);
		float calcularComision();
	protected:
};

#endif

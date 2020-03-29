#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor
{
	private:
		int cedula;
		float sueldoBase;
		float montoVentas;
		int contVenSinCom;
	public:
		Vendedor();
		int getCedula();
		void setCedula (int ced);
		float getSueldoBase();
		void setSueldoBase(float sB);
		float getMontoVentas();
		void setMontoVentas(float mV);
		int getContVenSinCom();
		void setContVenSinCom(int cV);
		float calcularComision();
		void contarVenSinCom();
	protected:
};

#endif

#ifndef EMPRESA_H
#define EMPRESA_H

#include "Vendedor.h"
using namespace std;

class Empresa
{
	private:
		float sueldoMinimo;
		float acumTotalVentas;
		float acumComision;
		float porcVendSinCom;
		int cedMenorCom;
		float comMenor;
	
	public:
		Empresa();
		float getSueldoMinimo();
		void setSueldoMinimo(float sM);
		float getAcumTotalVentas();
		void setAcumTotalVentas (float aTV);
		float getAcumComision();
		void setAcumComision(float aC);
		float getPorcVendSinCom();
		void setPorcVendSinCom(float pVC);
		int getCedMenorCom();
		void setCedMenorCom(int cMC);
		float getComMenor();
		void setComMenor(float cM);
		void calcularTotalVentasMenorSueldoMinimo(Vendedor ven);
		void calcularComMayores(Vendedor ven);
		void calcularPorcVendSinCom(Vendedor ven, int i);
		void calcularVenMenCom(Vendedor ven);
	protected:
};

#endif

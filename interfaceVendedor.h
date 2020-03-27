#ifndef INTERFACEVENDEDOR_H
#define INTERFACEVENDEDOR_H

#include <iostream>
using namespace std;

class interfaceVendedor
{
	public:
		interfaceVendedor();
		int leerCedula();
		float leerSueldoBase();
		float leerMontoVentas();
		void reporteVendedor(float comision);
	protected:
};

#endif

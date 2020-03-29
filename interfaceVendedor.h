#ifndef INTERFACEVENDEDOR_H
#define INTERFACEVENDEDOR_H

#include <iostream>
using namespace std;

class InterfaceVendedor
{
	public:
		InterfaceVendedor();
		int leerCedula(int i);
		float leerSueldoBase(int i);
		float leerMontoVentas(int i);
		void reporteVendedor(int i, float comision);
	protected:
};

#endif

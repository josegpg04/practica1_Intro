#include "interfaceVendedor.h"

interfaceVendedor::interfaceVendedor(){
}
int interfaceVendedor::leerCedula(){
	int ced;
	cout << "Ingrese la cedula del Vendedor"<<endl;
	cin  >> ced;
	return ced;
}
float interfaceVendedor::leerSueldoBase(){
	float sB;
	cout << "Ingrese el sueldo base del Vendedor"<<endl;
	cin >> sB;
	return sB;
}
float interfaceVendedor::leerMontoVentas(){
	float mV;
	cout << "Ingrese el monto de ventas del Vendedor"<<endl;
	cin >> mV;
	return mV;
}
void interfaceVendedor::reporteVendedor(float comision){
	cout << "REPORTE DEL VENDEDOR" << endl;
	cout << "La Comision es de " << comision << endl;
}

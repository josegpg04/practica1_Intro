#include "InterfaceVendedor.h"

InterfaceVendedor::InterfaceVendedor(){
}
int InterfaceVendedor::leerCedula(){
	int ced;
	cout << "Ingrese la cedula del Vendedor"<<endl;
	cin  >> ced;
	return ced;
}
float InterfaceVendedor::leerSueldoBase(){
	float sB;
	cout << "Ingrese el sueldo base del Vendedor"<<endl;
	cin >> sB;
	return sB;
}
float InterfaceVendedor::leerMontoVentas(){
	float mV;
	cout << "Ingrese el monto de ventas del Vendedor"<<endl;
	cin >> mV;
	return mV;
}
void InterfaceVendedor::reporteVendedor(float comision){
	cout << "REPORTE DEL VENDEDOR" << endl;
	cout << "La Comision es de " << comision << endl;
}

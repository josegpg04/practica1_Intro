#include "InterfaceVendedor.h"

InterfaceVendedor::InterfaceVendedor(){
}
int InterfaceVendedor::leerCedula(int i){
	int ced;
	cout << "Ingrese la cedula del Vendedor "<< i <<endl;
	cin  >> ced;
	return ced;
}
float InterfaceVendedor::leerSueldoBase(int i){
	float sB;
	cout << "Ingrese el sueldo base del Vendedor "<< i <<endl;
	cin >> sB;
	return sB;
}
float InterfaceVendedor::leerMontoVentas(int i){
	float mV;
	cout << "Ingrese el monto de ventas del Vendedor "<< i <<endl;
	cin >> mV;
	return mV;
}
void InterfaceVendedor::reporteVendedor(int i, float comision){
	cout << "REPORTE DEL VENDEDOR " << i << endl;
	cout << "La Comision es de " << comision << endl;
}

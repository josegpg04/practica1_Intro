#include "interfaceVendedor.h"

interfaceVendedor::interfaceVendedor(){
}
int leerCedula(){
	int ced
	cout<<"Ingrese la cedula del Vendedor"<<endl;
	cin>>ced;
	return ced;
}
float leerSueldoBase(){
	float sB
	cout<<"Ingrese el sueldo base del Vendedor"<<endl;
	cin>>sb;
	return sB;
}
float leerMontoVentas(){
	float mV
	cout<<"Ingrese el monto de ventas del Vendedor"<<endl;
	cin>>mV;
	return mV;
}
void reporteVendedor(){
	cout<<"REPORTE DEL VENDEDOR"<<endl;
	cout<<"La Comision es de "<<comision<<endl;
}

#include "InterfaceEmpresa.h"

InterfaceEmpresa::InterfaceEmpresa(){
}
void InterfaceEmpresa::reporteEmpresa(Empresa emp){
	cout << "REPORTE DE EMPRESA" << endl;
	cout << "El monto total de las ventas cuyos vendedores tienen sueldo base"<< endl;
	cout << "menor al sueldo minimo es de " << emp.getAcumTotalVentas() << endl;
	cout << "" << endl;
	cout << "El monto total de las comisiones mayores o iguales a 700"<<endl;
	cout << "es de " << emp.getAcumComision() <<endl;
	cout << "El porcentaje de vendedores que no recibieron comision"<<endl;
	cout << "es de " << emp.getPorcVendSinCom()<<"%"<<endl;
	cout << "La cedula del vendedor con la menor comision es " << emp.getCedMenorCom()<< endl;
	cout << "La menor comision es de " << emp.getComMenor() << endl;
}

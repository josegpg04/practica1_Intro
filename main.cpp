#include "Vendedor.h"
#include "Empresa.h"
#include "InterfaceVendedor.h"
#include "interfaceEmpresa.h"
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Vendedor ven;
	Empresa emp;
	InterfaceVendedor intVen;
	InterfaceEmpresa intEmp;
	
	int i, respuesta, ced;
	float sB, mV, comision;
	
	i=1;
	respuesta = 1;
	
	do{
		ced = intVen.leerCedula(i);
		ven.setCedula(ced);
		sB = intVen.leerSueldoBase(i);
		ven.setSueldoBase(sB);
		mV = intVen.leerMontoVentas(i);
		ven.setMontoVentas(mV);
		comision = ven.calcularComision();
		ven.contarVenSinCom();
		intVen.reporteVendedor(i, comision);
		emp.calcularTotalVentasMenorSueldoMinimo(ven);
		emp.calcularComMayores(ven);
		emp.calcularVenMenCom(ven);
		i=i+1;
		cout << "¿Desea registrar otro Vendedor a la Empresa?"<< endl;
		cout << "SI desea registrarlo, ingrese el numero 1"<< endl;
		cout << "En caso contrario (NO), ingrese cualquier numero"<< endl;
		cin >>respuesta;
	} while (respuesta == 1);
	emp.calcularPorcVendSinCom(ven, i);
	intEmp.reporteEmpresa(emp);

	return 0;
}

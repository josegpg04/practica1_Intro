#include "Empresa.h"

Empresa::Empresa(){
	sueldoMinimo = 1200;
	acumTotalVentas = 0.0;
	acumComision = 0;
	porcVendSinCom = 0.0;
	cedMenorCom = 0;
	comMenor = 10000000000000000000000.0;
}
float Empresa::getSueldoMinimo(){
	return sueldoMinimo;
}
void Empresa::setSueldoMinimo(float sM){
	sueldoMinimo = sM;
}
float Empresa::getAcumTotalVentas(){
	return acumTotalVentas;
}
void Empresa::setAcumTotalVentas(float aTV){
	acumTotalVentas = aTV;
}
float Empresa::getAcumComision(){
	return acumComision;
}
void Empresa::setAcumComision(float aC){
	acumComision = aC;
}
float Empresa::getPorcVendSinCom(){
	return porcVendSinCom;
}
void Empresa::setPorcVendSinCom(float pVC){
	porcVendSinCom = pVC;
}
int Empresa::getCedMenorCom(){
	return cedMenorCom;
}
void Empresa::setCedMenorCom(int cMC){
	cedMenorCom = cMC;
}
float Empresa::getComMenor(){
	return comMenor;
}
void Empresa::setComMenor(float cM){
	comMenor = cM;
}

void Empresa::calcularTotalVentasMenorSueldoMinimo(Vendedor ven){
	float sB, mV;
	sB = ven.getSueldoBase();
	mV = ven.getMontoVentas();
	if (sB < sueldoMinimo){
		acumTotalVentas=acumTotalVentas+mV;
	}
}
void Empresa::calcularComMayores(Vendedor ven){
	float comision;
	comision = ven.calcularComision();
	if (comision >= 700){
		acumComision = acumComision+comision;
	}
}
void Empresa::calcularPorcVendSinCom(Vendedor ven, int i){
	porcVendSinCom = ven.getContVenSinCom()/i*100;
}
void Empresa::calcularVenMenCom(Vendedor ven){
	int ced;
	float com;
	ced = ven.getCedula();
	com = ven.calcularComision();
	if (com<comMenor){
		comMenor = com;
		cedMenorCom = ced;
	}
}






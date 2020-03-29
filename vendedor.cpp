#include "Vendedor.h"

Vendedor::Vendedor(){
	cedula = 0;
	sueldoBase = 0.0;
	montoVentas = 0.0;
	contVenSinCom = 0;
}
int Vendedor::getCedula(){
	return cedula;
}
void Vendedor::setCedula(int ced){
	cedula = ced;
}
float Vendedor::getSueldoBase(){
	return sueldoBase;
}
void Vendedor::setSueldoBase(float sB){
	sueldoBase = sB;
}
float Vendedor::getMontoVentas(){
	return montoVentas;
}
void Vendedor::setMontoVentas(float mV){
	montoVentas = mV;
}
int Vendedor::getContVenSinCom(){
	return contVenSinCom;
}
void Vendedor::setContVenSinCom(int cV){
	contVenSinCom = cV;
}
float Vendedor::calcularComision(){
	float com;
	if (montoVentas > 500){
	com = montoVentas*18/100;	
	}
	else{
	com = 0.0;
	}
	return com;
}
void Vendedor::contarVenSinCom(){
	if (calcularComision() == 0.0){
		contVenSinCom = contVenSinCom+1;
	}
}


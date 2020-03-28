#include "vendedor.h"

vendedor::vendedor(){
	cedula = 0;
	sueldoBase = 0.0;
	montoVentas = 0.0;
}
int vendedor::getCedula(){
	return cedula;
}
void vendedor::setCedula(int ced){
	cedula = ced;
}
float vendedor::getSueldoBase(){
	return sueldoBase;
}
void vendedor::setSueldoBase(float sB){
	sueldoBase = sB;
}
float vendedor::getMontoVentas(){
	return montoVentas;
}
void vendedor::setMontoVentas(float mV){
	montoVentas = mV;
}
float vendedor::calcularComision(){
	float com;
	if (montoVentas > 500){
	com = montoVentas*18/100;	
	}
	else{
	com = 0.0;
	}
	return com;
}


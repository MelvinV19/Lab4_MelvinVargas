#include <iostream>
#include "Carro.h"
#include <string>
using namespace std;

Carro::Carro(){

}
Carro::Carro(string pColor,string pMarca,double pAltura){
	this->color=pColor;
	this->marca=pMarca;
	this->altura=pAltura;
}

//metodos;
string Carro::getMarca(){
	return marca;
}
void Carro::setMarca(string pMarca){
	marca=pMarca;
}
string Carro::getColor(){
	return color;
}
void Carro::setColor(string pColor){
	color=pColor;
}
double Carro::getAltura(){
	return altura;
}
void Carro::setAltura(double pAltura){
	altura=pAltura;
}
//destructor
Carro::~Carro(){
	cout<<"Se elimino el carro :v";
}

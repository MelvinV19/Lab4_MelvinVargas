#include "Edificio.h"
#include<iostream>
using namespace std;
Edificio::Edificio(int pPersonas,int pPisos){
		this->personas=pPersonas;
		this->pisos=pPisos;
}
Edificio::Edificio(){
	
}
//Metodos
int Edificio::getPersonas(){
	return personas;
}
void Edificio::setPersonas(int pPersonas){
	personas=pPersonas;
}

int Edificio::getPisos(){
	return pisos;
}

void Edificio::setPisos(int pPisos){
	pisos=pPisos;
}

Edificio::~Edificio(){
	cout<<"El edificio fue eliminado :v";
}

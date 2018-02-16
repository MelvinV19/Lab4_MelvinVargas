#include<iostream>
#include "Parqueo.h"
using namespace std;

Parqueo::Parqueo(){
	
}

Parqueo::Parqueo(int capacidadpersonas,int pisos,double altura){
	n=capacidadpersonas/10;
	this->altura=altura;
	if(n<12){
		m=n*0.17;
	}
	if(n>=12){
		m=n*0.4;
	}
	z=pisos;
	matriz3d=new Carro***[capacidadpersonas];
	for(int i=0;i<capacidadpersonas;i++){
		matriz3d[i]=new Carro**[pisos];
		for(int j=0;j<pisos;j++){
			matriz3d[i][j]=new Carro*[z];
			for(int k=0;k<z;k++){
				matriz3d[i][j][k]=NULL;
			}
			
		}
	}
}

//metodos
double Parqueo::getAltura(){
	return altura;
}
void Parqueo::setAltura(double pAltura){
	altura=pAltura;
}

//desturctor
Parqueo::~Parqueo(){
	for(int i=0;i!=n;i++){
		for(int j=0;j!=z;j++){
			for(int k=0;k!=z;k++){
				matriz3d[i][j][k]=NULL;
				delete matriz3d[i][j][k];

			}
			delete[] matriz3d[i][j];
		}
		delete[] matriz3d[i];
	}
	delete[] matriz3d;
}

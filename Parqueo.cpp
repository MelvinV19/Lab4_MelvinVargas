#include<iostream>
#include "Parqueo.h"
#include "Carro.h"
using namespace std;


void parquear(Carro*);
void eliminar();
void listar();

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
	cout<<"Se creo la matriz"<<endl;
}

//metodos
double Parqueo::getAltura(){
	return altura;
}
void Parqueo::setAltura(double pAltura){
	altura=pAltura;
}
void Parqueo::parquear(Carro* carro1){
	int piso=0;
	bool encontro=false;
	cout<<"Ingrese piso donde se quiere parquear: "<<endl;
	cin>>piso;
	for(int i=0;i!=n;i++){
		if(encontro==false){
			for(int j=0;j!=m;j++){
				if(matriz3d[n][m][piso]==NULL){
					matriz3d[n][m][piso]==carro1;
					cout<<"Carro parqueado exitosamente"<<endl;
					encontro=true;
				}
			}	
		}
	}
}

void Parqueo::eliminar(){
	int piso=0;
	int fila,columna;
	cout<<"Ingrese piso del carro: "<<endl;
	cin>>piso;
	cout<<"Ingrese posicion n del carro: "<<endl;
	cin>>fila;
	cout<<"Ingrese posicion m del carro: "<<endl;
	cin>>columna;
	if(matriz3d[fila][columna][piso]!=NULL){
		matriz3d[fila][columna][piso]==NULL;
	}else{
		cout<<"Aqui no hay ningun carro"<<endl;
	}
}

void Parqueo::listar(){
	int piso=0;
	cout<<"Ingrese piso que desea ver";
	cin>>piso;
	for(int i=0;i!=n;i++){
		for(int j=0;j!=m;j++){
			if(matriz3d[n][m][piso]!=NULL){
				cout<<matriz3d[n][m][piso];
			}else{
				cout<<"NULL";
			}
		}
		cout<<endl;
	}

}

//destructor
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

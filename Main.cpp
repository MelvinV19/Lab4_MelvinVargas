#include <iostream>
#include <string>
#include "Edificio.h"
#include "Parqueo.h"
using namespace std;
//prototipo del metodo menu
int menu();

int main(){
	int capacidadedificio=0;
	int cantidadpisos;
	int op;
	double alturaparqueo;
	while(capacidadedificio<50||capacidadedificio>200){	
		cout<<"Ingrese la capacidad de personas para el edificio"<<endl;
		cin>>capacidadedificio;
	}
	cout<<"Ingrese la cantidad de pisos que se construiran"<<endl;
	cin>>cantidadpisos;
	cout<<"Ingrese la altura del parqueo"<<endl;
	cin>>alturaparqueo;
	Edificio* edificio=new Edificio(capacidadedificio,cantidadpisos);
	Parqueo* parqueo=new Parqueo(edificio->getPersonas(),edificio->getPisos(),alturaparqueo);
	while(op!=5){
		switch(op=menu()){
			case 1:{
					string color;
					string marca;
					double altura;
					cout<<"Ingrese color del carro: "<<endl;
					cin>>color;
					cout<<"Ingrese marca del carrlo: "<<endl;
					cin>>marca;
					cout<<"Ingrese la altura del carro: "<<endl;
					cin>>altura;
					if(parqueo->getAltura()<altura){
						break;
					}
					if(parqueo->getAltura()>=altura){
						Carro* carro= new Carro(color,marca,altura);
						parqueo->parquear(carro);
					}
				   }   	
				break;
			case 2:{
					  parqueo->eliminar(); 
				   }
				break;
			case 3:{
					   parqueo->listar();

				   }
				break;
			case 4:{
						parqueo->~Parqueo();
						edificio->~Edificio();
						op=5;
				   }
				break;
			case 5:{
					   parqueo->~Parqueo();
					   edificio->~Edificio();


						
				   }
				break;
		}
	}
	return 0;
}

int menu(){
	int bandera=0;
	while(bandera==0){
		int num;
		cout<<"*************Menu***************"<<endl;
		cout<<"1.Crear un carro"<<endl;
		cout<<"2.Eliminar un carro"<<endl;
		cout<<"3.Listar Parqueos"<<endl;
		cout<<"4.Librerar memoria"<<endl;
		cout<<"5.Salir del programa"<<endl;
		cout<<"Ingrese numero de opcion: "<<endl;
		cin>>num;
		return num;
	}
}



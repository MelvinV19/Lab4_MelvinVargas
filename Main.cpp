#include <iostream>
#include <string>
using namespace std;
int main(){
	int capacidadedificio=0;
	int cantidadpisos;
	while(capacidadedificio<50||capacidadedificio>200){	
		cout<<"Ingrese la capacidad de personas para el edificio"<<endl;
		cin>>capacidadedificio;
	}
	cout<<"Ingrese la cantidad de pisos que se construiran";
	cin>>cantidadpisos;
	return 0;
}

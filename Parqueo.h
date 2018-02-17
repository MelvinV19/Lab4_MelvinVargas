#ifndef PARQUEO
#define PARQUEO
#include "Carro.h"
using namespace std;
class Parqueo{
	private:
		int n;
		int m;
		int z;
		Carro**** matriz3d;
		double altura;
		
	public:
		Parqueo();
		Parqueo(int,int,double);
		//mutadores
		double getAltura();
		void setAltura(double);
		void parquear(Carro*);
		void eliminar();
		void listar();
		//destructor
		~Parqueo();

};
#endif

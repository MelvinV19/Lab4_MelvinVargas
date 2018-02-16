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
		//destructor
		~Parqueo();

};
#endif

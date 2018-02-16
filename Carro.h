#ifndef CARRO
#define CARRO
#include <string>
using namespace std;
class Carro{
	private:
		string color; 
		string marca;
		double altura;
	
	public:
		Carro();
		Carro(string,string,double);

		//mutadores
		string getColor();
		void setColor(string);
		string getMarca();
		void setMarca(string);
		double getAltura();
		void setAltura(double);
		//destructor
		~Carro();
};
#endif

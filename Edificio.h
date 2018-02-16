
#ifndef EDIFICIO_H
#define EDIFICIO_H
using namespace std;
class Edificio{
	private:
		int personas;
		int pisos;
	public:
		//constructores
		Edificio();
		Edificio(int,int);


		//mutadores
		int getPersonas();
		void setPersonas(int);
		int getPisos();
		void setPisos(int);


		//destructor
		~Edificio();
};

#endif

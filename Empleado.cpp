#include <iostream>
using namespace std;
class Empleado{

	// atributos

	protected : string nombres,apellidos,sueldo;

				int codigo;

	// costructor
	protected : 
		Empleado(){

		}
		Empleado(string nom,string ape,string suel,int cod){

			nombres = nom;
			apellidos = ape;
			sueldo = suel;
			codigo = cod;
		}
	
	// metodos
	void mostrar();
};


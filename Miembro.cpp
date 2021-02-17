#include "Empleado.cpp"
#include <iostream>
using namespace std;

class Miembro : Empleado{
	
 // atributos
 private : string puesto;
 // constructor
 public :
Miembro(){
 }
 Miembro(string nom,string ape,string suel,int cod,string p) : Empleado(nom,ape,suel,cod){ 
 puesto = p;
 }
 // METODOS
 //set (modificar)
 void setPuesto(string p){puesto = p;}
 void setNombres(string nom){nombres = nom;}
 void setApellidos(string ape){apellidos = ape;}
 void setSueldo(string suel){sueldo = suel;}
 void setCodigo(int cod){codigo = cod;}
 //get (mostrar)
 string getPuesto(){	return puesto;}
 string getNombres(){	return nombres;}
 string getApellidos(){	return apellidos;}
 string getSueldo(){	return sueldo;}
 int getCodigo(){	return codigo;}
// metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<puesto<<","<<nombres<<","<<apellidos<<","<<sueldo<<","<<codigo<<endl;
}
};

#include "Miembro.cpp"
#include <iostream>
using namespace std;

main(){
	string puesto,nombres,apellidos,sueldo;
	int codigo;
	cout<<"Ingrese Codigo Empleado: ";
	cin>>codigo;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	// instanciar un objeto
	Miembro obj = Miembro(nombres,apellidos,sueldo,codigo,puesto);
	obj.mostrar();
	
	// instanciar un objeto y utilizar get and set

/*	Cliente obj = Miembro();
	obj.setPuesto(puesto);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setSueldo(sueldo);
	obj.setCodigo(codigo);
	//obj.mostrar();
	cout<<"Puesto: "<<obj.getPuesto()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Sueldo: "<<obj.getSueldo()<<endl;
	cout<<"Codigo: "<<obj.getCodigo()<<endl;
*/	
}

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char opcion;
	char opcionSalir;
	string tarea;
	
	do{
		cout<<"Agregar tarea? s/n: "; 
		cin>>opcion;
		if(opcion == 's' || opcion == 'S'){
			cin.ignore();
			cout<<"ingresa la tarea por realizar: ";
			getline(cin,tarea);
			cout<<endl;
		}
	
		cout<<"Eliminar tarea?: s/n: ";
		cin>>opcion;
		if(opcion == 's'|| opcion == 'S'){
			cout<<"eliminando tarea..."<<endl;
			tarea="";
			cout<<"Tarea eliminada"<<endl;
		}
		
		cout<<"\n...:::Tarea pendiente:::..."<<endl;
		cout<<tarea<<endl;
		
		cout<<"Salir? s/n"<<endl;
		cin>>opcionSalir;
		
	}while(opcionSalir != 's'||opcionSalir != 'S');
	
	
	
	cin.get();
	/*
	string tarea = "";
	cout<<"ingresa la tarea por realizar: "<<endl;
	getline(cin,tarea);
	cout<<"T1: "<<tarea<<endl;
	int tamanio = tarea.length();
	cout<<"tamaño: "<<tamanio<<endl;
	*/
	return 0;
}

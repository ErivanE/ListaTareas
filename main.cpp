#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char opcion;
	char opcionSalir;
	int contador=0;
	int numeroTarea;
	string tarea[10];
	
	do{
		cout<<"Agregar tarea? s/n: "; 
		cin>>opcion;
		if(opcion == 's' || opcion == 'S'){
			cin.ignore();
			cout<<"ingresa la tarea por realizar: ";
			getline(cin,tarea[contador]);
			cout<<endl;
			contador++;
		}
	
		cout<<"Eliminar tarea?: s/n: ";
		cin>>opcion;
		if(opcion == 's'|| opcion == 'S'){
			//que numero de tarea vas a borrar?
			cout<<"Tarea a eliminar? ";
			cin>> numeroTarea; 		//Guarda el numero en la variable numeroTarea
			tarea[numeroTarea]="";	//deja en blanco el strig[numeroTarea], es decir el string que se selecciono
			cout<<"Tarea eliminada"<<endl;
		}
		
		cout<<"\n...:::Tareas pendientes:::..."<<endl;
		//muestra TODAS las tareas creadas.
		for(int i=0;i<=contador; i++){
			cout<<tarea[i]<<endl;		//con esto hacemos un recorrido desde 0 hasta contador, osease la ultima tarea agregada
		}
		
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

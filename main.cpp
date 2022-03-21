#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(){
	char opcion;
	char opcionSalir;
	int opcionMenu;
	int contador=0;
	int numeroTarea;
	int tareaEliminar;
	string tarea[10];
	
	do{
		cout<<"Menu"<<endl;
		cout<<"1. Agregar Tarea"<<endl;
		cout<<"2. Eliminar Tarea"<<endl;
		cout<<"3. Ver tareas"<<endl;
		cout<<"4. Salir."<<endl;
		cin>>opcionMenu;
		cin.ignore();
		
		switch(opcionMenu){
			case 1:
				cout<<"Ingresa la tarea a realizar: ";
				getline(cin, tarea[contador]);
				contador++;
				system("cls");
				break;
			case 2:
				cout<<"tarea a eliminar?: ";
				cin>>numeroTarea;
				cin.ignore();
				tareaEliminar = numeroTarea-1;
				tarea[tareaEliminar] = "";
				cout<<"Tarea Eliminada"<<endl;
				system("cls");
				break;
			case 3:
				cout<<"...:::Tareas Pendientes:::..."<<endl;
				for(int i=0;i<=contador; i++){
					cout<<"Tarea "<<i+1<<" : "<<tarea[i]<<endl; //con esto hacemos un recorrido desde 0 hasta contador, osease la ultima tarea agregada
			 	}
			 	cin.get();
				system("cls");
				break;
			case 4:
				cout<<"Saliendo...";
				break;
			
			default: cout<<"Ingresa una opcion correcta."<<endl;	
		}
				
		
		/*
		cout<<"Agregar tarea? s/n: "; 
		cin>>opcion;
		cin.ignore();
		if(opcion == 's' || opcion == 'S'){
			cout<<"ingresa la tarea por realizar: ";
			getline(cin,tarea[contador]);
			cout<<endl;
		}
		
		cout<<"Eliminar tarea?: s/n: ";
		cin>>opcion;
		cin.ignore();
		if(opcion == 's'|| opcion == 'S'){
			//que numero de tarea vas a borrar?
			cout<<"Tarea a eliminar? ";
			cin>> numeroTarea; 		//Guarda el numero en la variable numeroTarea
			cin.ignore();
			int tareaEliminar = numeroTarea-1;
			tarea[tareaEliminar]="";	//deja en blanco el strig[numeroTarea], es decir el string que se selecciono
			cout<<"Tarea eliminada"<<endl;
		}
		
		
		cout<<"\n...:::Tareas pendientes:::..."<<endl;
		//muestra TODAS las tareas creadas.
		for(int i=0;i<=contador; i++){
			cout<<"Tarea "<<i+1<<" : "<<tarea[i]<<endl;		//con esto hacemos un recorrido desde 0 hasta contador, osease la ultima tarea agregada
		}
		
		contador++;
		
		cout<<"\n\nSalir? s/n"<<endl;
		cin>>opcionSalir;
		cin.ignore();
		*/
		
	}while(opcionMenu != 4);
	
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

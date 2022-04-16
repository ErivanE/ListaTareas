/*
			0.4
	Al momento de eliminar una tarea, las tareas siguientes a la que se elimina se recorren un lugar.
	
		
*/
#ifdef _WIN32
	#include <windows.h>
#endif
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int cantidadTareas = 0;
int tareaSeleccionada;
string tarea[10];

void eliminarTarea();
void imprimir(string texto);
void limpiarPantalla();
void mostrarTareas();
void agregarTarea();
void pausa();
void reiniciarCin();
class Tarea;



int main(){
	int opcionMenu;	
	do{
		limpiarPantalla();
		imprimir("...:::MENU:::...");
		imprimir("1. Agregar Tarea");
		imprimir("2. Eliminar Tarea");
		imprimir("3. Ver Tareas");
		imprimir("4. Salir");
		
		cin>>opcionMenu;
		reiniciarCin();
		limpiarPantalla();
		
		switch(opcionMenu){
			case 1:
				agregarTarea();
				break;
			case 2:
				eliminarTarea();
				break;
			case 3:
				imprimir("...:::Tareas Pendientes:::...");
				mostrarTareas();
				pausa();
				break;
			case 4:
				imprimir("Saliendo...");
				break;
			
			default: 
				imprimir("Selecciona una opcion valida");
				pausa();
		}	
	}while(opcionMenu != 4);
	
	return 0;
}



void limpiarPantalla(){
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}
void reiniciarCin(){
	cin.ignore();
}
void imprimir(string texto){
	cout<<texto<<endl;
}
void pausa(){
	cout<<"\nPresiona para continuar."<<endl;
	cin.get();
}
void mostrarTareas(){
	for(int i=0;i<=(cantidadTareas - 1); i++){
		cout<<"\nTarea "<<i+1<<" : "<<tarea[i]<<endl; //con esto hacemos un recorrido desde 0 hasta contador, osease la ultima tarea agregada
	}
}
void agregarTarea(){
	imprimir("Ingresa la tarea a realizar: ");
	getline(cin, tarea[cantidadTareas]);
	cantidadTareas++;
}
void eliminarTarea(){
	string temp;
	imprimir("Tarea a eliminar?: ");
	cin>>tareaSeleccionada;
	reiniciarCin();
	
	tarea[tareaSeleccionada-1] = "";
	for(int i=tareaSeleccionada-1;i<10;i++){
		if(i==9)break;
		temp = tarea[i];
		tarea[i] = tarea[i+1];
		tarea[i+1] = temp;
	}
	imprimir("Tarea Eliminada.");
}

class Tarea{
	
};


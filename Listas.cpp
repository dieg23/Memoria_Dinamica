
//Procedimiento erroneo

#include <iostream>
#include <conio.h>

using namespace std;

//declara estructura que contiene un dato y un puntero hacia la misma estructura
struct Nodo{
	int dato;
	struct Nodo *siguiente;
} *inicio, *aux, *actual;

void insertarNodo(int);
void mostrarNodo();

int main(int argc, char** argv){
	inicio = NULL;
	
	insertarNodo(10);
	insertarNodo(20);
	insertarNodo(30);
	
	mostrarNodo();
	
	cin.get();
	return 0;
}

void insertarNodo(int valor)
{
	actual = inicio;
	if(actual==NULL)
	{
		aux = new Nodo();
		aux->dato = valor;
		aux->siguiente = NULL;
		inicio = aux;
	} else{
		do
		{
			actual = actual->siguiente;
			if(actual==NULL)
			{
				aux = new Nodo();
				aux->dato = valor;
				aux->siguiente = NULL;
				actual = aux;
			}		
		} while (actual->siguiente != NULL);
		
	}
}

void mostrarNodo()
{
	actual = inicio;
	while(actual != NULL)
	{
		cout<<" -> "<<actual->dato<<" ";
		actual = actual->siguiente;
	}
	
}


#include "Lista.h"



Lista::Lista()
{
	cabeza = NULL;
}

void Lista::insertar(int id, string nombre) {
	Nodo* nuevo = new Nodo(id, nombre);
	nuevo->siguiente = cabeza;
	cabeza = nuevo;
}

void Lista::eliminar(Nodo* n) {
	Nodo* aux;
	for (aux = cabeza; aux != NULL; aux = aux->siguiente) {
		if (n == aux) {
			aux->siguiente = NULL;
			
		}
	}
}

Nodo* Lista::buscar(int n) {
	Nodo* aux;
	for (aux = cabeza; aux != NULL; aux = aux->siguiente) {
		if (n == aux->id) {
			return aux;
		}
	}
	return NULL;
}

void Lista::mostrar() {
	Nodo* aux;
	for (aux = cabeza; aux != NULL; aux = aux->siguiente)
		cout << aux->id<< ". "<< aux->nombre << "-> ";

}
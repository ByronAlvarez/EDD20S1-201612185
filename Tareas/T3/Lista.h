#pragma once
#include <iostream>
#include <string>
#include "Nodo.h"
using namespace std;

class Lista
{
public:
	Lista();
	void insertar(int id, string nombre);
	void eliminar(Nodo* n);
	Nodo* buscar(int n);
	void mostrar();

private:
	Nodo * cabeza;
	
};


#pragma once
#include "NodoDoble.h"
class ListaDoble
{
public:
	ListaDoble();

	NodoDoble* first;
	NodoDoble* last;

	bool isEmpty();
	void show();
	void addFirst(char c);
	NodoDoble* search(string palabra);
	void eliminateLast();

};


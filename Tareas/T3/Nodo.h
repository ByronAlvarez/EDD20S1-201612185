#pragma once
#include <iostream>
#include <string>
using namespace std;
class Nodo
{
public:
	Nodo(int id , string nombre);
	string nombre;
	int id;
	Nodo* siguiente;
	

};


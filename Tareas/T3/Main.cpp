#include <iostream>
#include <cstdlib>
#include <string>
#include "Lista.h"
using namespace std;


int main(int argc, char *argv[])
{
	Lista lista = Lista();
	lista.insertar(1, "Luis");
	lista.insertar(2, " Byron");
	lista.insertar(3, "Ronald");
	lista.insertar(4, "Pablo");
	lista.insertar(5, " Pedro");
	lista.insertar(6, "Juan");

	lista.mostrar();
	lista.eliminar(lista.buscar(4));

	cout << "\n";

	lista.insertar(7, "Maria");
	lista.mostrar();


	system("pause");
}
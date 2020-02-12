#include <iostream>
#include <cstdlib>
#include <string>
#include "ListaDoble.h"
using namespace std;


int main(int argc, char *argv[])
{
	ListaDoble lista = ListaDoble();
	
	string a = "hola";

	lista.addFirst('o');
	lista.addFirst('g');
	lista.addFirst('i');
	lista.addFirst('m');
	lista.addFirst('A');

	lista.addFirst('a');
	lista.addFirst('l');
	lista.addFirst('o');
	lista.addFirst('H');
	
	lista.show();
	
	lista.eliminateLast();
	cout << "\n";
	lista.show();
	lista.eliminateLast();
	cout << "\n";
	lista.show();
	cout << "\n";

	cout << lista.search("Hola")->letra;

	system("pause");
}
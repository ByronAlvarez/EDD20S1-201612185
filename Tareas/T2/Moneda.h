
#include <cstdlib>
#include <iostream>
using namespace std;

class Moneda
{
public:
	string nombre;
	int id;
	Moneda();
	void Transferencia(int id);
	void TransferenciaFrom(int from, int to);

};


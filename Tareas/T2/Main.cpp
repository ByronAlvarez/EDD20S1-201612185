#include <iostream>
#include <cstdlib>
#include <string>
#include "Moneda.h"
using namespace std;



int main(int argc, char *argv[])
{
	int users[5][2] = { { 0,0},{ 1,0 },{ 2,0 },{ 3,0 },{ 4,0 } };

	Moneda m = Moneda();

	
	m.Transferencia(3);
	cout << m.id;
	users[3][1] = users[3][1] + 1;

	m.TransferenciaFrom(3, 4);
	users[3][1] = users[3][1] - 1;
	users[4][1] = users[4][1] + 1;


	cout << users[3][1];

	

	system("pause");
}
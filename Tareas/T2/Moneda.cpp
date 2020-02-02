#include "Moneda.h"


Moneda::Moneda()
{
	nombre = "Bcoins";
	id = NULL;
}


void Moneda::Transferencia(int ID)
{
	id = ID;

}

void Moneda::TransferenciaFrom(int ID1, int ID2)
{

	id = ID2;

}




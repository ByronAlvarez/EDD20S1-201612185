#include "ListaDoble.h"



ListaDoble::ListaDoble()
{
	first = NULL;
	last = NULL;
}

bool ListaDoble::isEmpty() {

	if ((first = NULL) && (last = NULL)) {
		return true;
		cout << "primero";
	}
	else { return false; }
}

void ListaDoble::addFirst(char c) {
	NodoDoble* niu = new NodoDoble(c);
	niu->next = first;
	
	if (last != NULL) {
	}
	else {
		last = niu;
	}

	if(first != NULL) {
		first->prev = niu;
	}
		first = niu;

}


void ListaDoble::eliminateLast() {
	if (last != NULL) {
		last = last->prev;
		last->next = NULL;
	}
}

NodoDoble* ListaDoble::search(string palabra) {
	NodoDoble* aux = first;
	
	while (aux != NULL) {
		if ((char) palabra[0] == aux->letra) {
			
			NodoDoble* aux2 = aux;
			int a = 0;
			while ( a  < palabra.length() && aux2!= NULL) {
				if ((char)palabra[a] != aux2->letra) {
					cout << "entro";
					return NULL;
				}
				aux2 = aux2->next;
				a++;
			}
			if (a  != palabra.length()) {
				return NULL;
			}
			return aux;
		}
		aux = aux->next;
	}
	return NULL;
}

void ListaDoble::show() {
	NodoDoble* aux;
	for (aux = first; aux != NULL; aux = aux->next) {
		cout << aux->letra << "-> ";
	}
}

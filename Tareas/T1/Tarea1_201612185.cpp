#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int tamanio;
	cout<<"ingrese tamanio de matriz: "<<"\n";
	cin>>tamanio;
	int matriz[tamanio][tamanio];
	
	// Imprimir matriz
	for(int i=0;i<tamanio;i++){
		cout<<"\n";
		for(int j=0;j<tamanio;j++){
			//Condicion para colocar 1s solo en borde
			if(i==0||i==tamanio-1||j==0||j==tamanio-1){
				cout<<"[1]";
			}
			else{
				cout<<"[ ]";
				}
			}
		}
	system("pause");
	}

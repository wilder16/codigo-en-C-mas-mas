//Haga un algoritmo que solicite por teclado un entero del 1 al 10 y muestre en la salida su tabla de multiplicar.

#include <iostream>
using namespace std;

int main () 
{
	int num;
	
	cout << "Por favor ingrese un numero del 1 al 10: ";
	cin >> num;

	while(num > 10 || num <= 0 )
	{
		cout << "Ingresarte un numero fuera del rango permitido, por favor ingresar un numero del 1 al 10: ";
		cin >> num;
	}
	cout << "La tabla de multiplicar del numero "<< num <<" es\n";
	for(int i = 1; i <= 10; i++)
	{
		cout << num << "X" << i <<" = " << num*i;
		cout <<"\n";
	}	
	
	return 0; 
}

//Haga un algoritmo que calcule y muestre en la salida la suma de los cuadrados de los 10 primeros enteros mayores que cero

#include <iostream>
using namespace std; 

int main ()
{
	int suma;
	
	for(int i = 1; i <= 10; i++)
	{
		suma += i*i;
	}
	cout << "La suma de los cuadrados de los 10 primeros numeros enteros mayores a cero es: " << suma ;
	return 0; 
}

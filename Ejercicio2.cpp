/*
Haga un algoritmo que lea por teclado n�meros hasta que se introduzca un cero. 
En ese momento el algoritmo debe terminar y mostrar en la salida el n�mero de valores mayores que cero le�dos.
*/

#include <iostream>;
using namespace std; 

int main ()
{
	int num, contador = 0; 
	do
	{
		cout << "Ingrese un numero deseado: ";
		cin >> num;
		
		if (num > 0)
		{
			contador++; 
		}
	}
	while( num != 0 );
	
	cout << "La cantidad de numero mayores a ceros es: " << contador;
	return 0; 
	
 } 


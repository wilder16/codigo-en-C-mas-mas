/*
Haga un algoritmo que lea por teclado números hasta que se introduzca un cero. 
En ese momento el algoritmo debe terminar y mostrar en la salida el número de valores mayores que cero leídos.
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


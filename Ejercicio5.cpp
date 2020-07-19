/*
Escriba un algoritmo que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. 
El algoritmo debe entregar la suma de los valores mayores a 0 introducidos.
*/

#include <iostream>
using namespace std; 

int main ()
{
	int num, sum = 0;
	do
	{
		cout << "Por favor ingrese el numero que desee: ";
		cin >> num; 
		
		if ( num > 0 ) sum += num;
	}
	while(num != 0 && (num < 20 || num > 30));
	
	cout << "La suma de los valores mayores a 0 ingresado es: " << sum; 
	return 0; 
	
}

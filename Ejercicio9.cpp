//Escriba un algoritmo que calcule el valor de: 1*2*3*...*n (factorial)

#include <iostream>
using namespace std; 

int main ()
{
	int num; 
	double factorial = 1; 
	
	cout << "Por favor ingrese el numero al cual le desea calcular su factorial: ";
	cin >> num; 
	
	while(num < 0)
	{
		cout << "Ingresaste un numero negativo y no se puede calcular el factorial de un entero negativo \n";
		cout << "Por favor ingrese el numero al cual le desea calcular su factorial: ";
		cin >> num; 
		if (num >= 0) break;
	}
	for(int i = 1; i <= num; i++)
	{
		factorial *= i;
	}
	
	cout << "El factorial del numero " << num << " es " << factorial; 
	return 0; 
}

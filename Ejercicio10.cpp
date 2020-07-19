//Escriba un algoritmo que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include <iostream>
using namespace std; 

int main ()
{
	int num;
	double suma = 1, factorial = 1; 
	
	cout << "Por favor ingrese el numero hasta el cual desea calcular la suma de los factoriales: "; 
	cin >> num; 
	
	while(num < 0)
	{
		cout << "Ingresaste un numero negativo y no se puede calcular el factorial de un entero negativo \n";
		cout << "Por favor ingrese el numero hasta el cual desea calcular la suma de los factoriales: ";
		cin >> num; 
	}
	for(int i = 1; i <= num; i++)
	{
		factorial *= i;
		suma += factorial;
	}
	cout << "La suma de los factoriales desde el 0! hasta el " << num <<"! es: " << suma; 
	return 0;
}

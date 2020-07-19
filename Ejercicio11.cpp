//Escriba un algoritmo que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>
using namespace std; 

int main ()
{
	int num;
	double resulPotencia = 1, suma = 0; 
	
	cout << "Por favor ingrese el numero hasta donde desea calcular la suma de 2^n...: ";
	cin >> num;
	
	if(num == 0)
	{
		suma = 1;
	}
	else if(num > 0)
	{
		for(int i = 1; i <= num; i++)
		{
			resulPotencia *= 2;
			suma += resulPotencia;
		}	
	}
	else
	{
		for(int i = -1; i >= num; i--)
		{
			resulPotencia *= 0.5;
			suma += resulPotencia;
		}
	}	
	cout << "La suma de las potencias de 2^n hasta el 2^" << num << " es: " << suma;
	
	
	
	return 0;
}

//Hacer un algoritmo que haga la serie fibonacci -> 1 1 2 3 5 8 13...n

#include <iostream>
using namespace std; 

int main ()
{
	int num; 
	double fibonacci, num1 = 1, num2 = 1;
	
	cout << "Por favor ingrese el numero hasta donde quiere visualizar la serie de Fibonacci: ";
	cin >> num;
	while(num <= 0)
	{
		cout << "Ingresaste un numero por fuera del rango permitido, solo de pueden ingresar entero positivos"; 
		cout << "\nPor favor ingrese el numero hasta donde quiere visualizar la serie de Fibonacci: ";
		cin >> num;
	}
	
	cout << "\nLa serie de Fibonacci hasta el numero " << num << " es: ";
	for(int i = 1; i <= num; i++)
	{	
		num1 = num2;
		num2 = fibonacci;
		fibonacci = num1 + num2;
		cout << fibonacci << " ";
	}
	
	
	 
	return 0;
}

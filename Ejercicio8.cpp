//Escriba un algoritmo que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
using namespace std; 

int main()
{
	int num; 
	double suma = 0;
	while(true)
	{
		cout << "\nPor favor ingrese el numero hasta el cual desea calcular la suma de los numeros impares: ";
		cin >> num;
		if(num <= 0)
		{
			cout << "\nIngresaste un valor por fuera del rango, solo se pueden ingresar enteros positivos";
		}
		else break; 
	}
	
	for (int i = 1; i <= num; i++)
	{
		if(i%2 != 0)
		{
			suma += i; 
		}
	}
	cout << "La suma de todos los numeros impares desde el 1 hasta el " << num << " es: " << suma;
	return 0; 
}

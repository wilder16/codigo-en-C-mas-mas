//Escriba un algoritmo que calcule el valor de: 1+2+3+...+n

#include <iostream>
using namespace std; 

int main ()
{
	int num;
	double suma = 0; 
	cout << "Por favor ingrese el numero hasta el cual desea calcular la suma: ";
	cin >> num; 
	while(num <= 0)
	{
		cout << "\nIngresaste un numero por fuera del rango solo se permiten numero enteros positivos";
		cout << "\nPor favor vuelve a ingresar el numero hasta el cual desea calcular la suma: ";
		cin >> num; 
	}
	
	for(int i = 1; i <= num; i++)
	{
		suma += i;
	}
	cout << "La suma de todo los numeros desde el 1 hasta el " << num << " es: " << suma;
	
	
	return 0; 
}

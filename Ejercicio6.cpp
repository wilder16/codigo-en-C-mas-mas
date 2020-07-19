//Escriba un algoritmo que calcule Xy (x^y), donde tanto x como y son enteros positivos.

#include <iostream>
using namespace std; 

int main ()
{
	int base, exponente; 
	double resultado = 1; 
	
	cout << "Por favor ingrese el numero el cual desea sacar su potencia: ";
	cin >> base;
	while(base <= 0)
	{
		cout << "\nIngresaste un valor invalido solo se permiten enteros positivos";
		cout << "\nPor favor vuelve a ingrar el numero el cual desea sacar su potencia: ";
		cin >> base;
	}
	cout << "Por favor ingrese el exponente o la potencia la cual desea calcular: ";  
	cin >> exponente; 
	while(exponente <= 0)
	{
		cout << "\nIngresaste un valor invalido solo se permiten enteros positivos";
		cout << "\nPor favor vuelve a ingrar el exponente o la potencia la cual desea calcular: ";
		cin >> exponente;
	}
	
	for(int i = 1; i <= exponente; i++)
	{
		resultado *= base;
	}
	cout << "El resultado de la operacion del numero " << base << " elevado a la " << exponente <<" es: " << resultado; 
	
	return 0; 
}

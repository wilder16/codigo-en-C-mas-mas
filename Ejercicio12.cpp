//Hacer un algoritmo que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n

#include <iostream>
using namespace std;

int main ()
{
	int num, par = 0, impar = 0;
	double sumRes;
	
	cout << "Por favor ingrese el numero hasta donde desea calcular la suma y resta consecutiva: ";
	cin >> num;
	
	while(num < 0)
	{
		cout << "Ingresaste un numero negativo este progrma solo esta pensado para los enteros posivitos\n";
		cout << "Por favor ingrese el numero hasta donde desea calcular la suma y resta consecutiva: ";
		cin >> num;
	}
	for(int i = 1; i <= num; i++)
	{
		if(i%2 == 0)
		{
			par +=i; 	
		}
		else
		{
			impar +=i; 
		}
	}
	sumRes = impar-par; 
	cout << "La suma de y resta de los numeros consecutiva hasta el numero " <<num << " es: " << sumRes;
	return 0;  
}

/*
Escriba un algoritmo que tome cada 4 horas la temperatura exterior, ley�ndola durante un per�odo de 24 horas. 
Es decir, debe leer 6 temperaturas. Calcule la temperatura media del d�a, la temperatura m�s alta y la m�s baja
*/

#include <iostream>
using namespace std; 

int main ()
{
	double temperatura, tempeMayor = 0, tempeMenor, tempeMedia = 0;
	
	
	
	for (int i = 0; i < 24; i+=4)
	{
		cout << "La son las " << i << " horas por favor ingrese la temperatura exterior: " ;
		cin >> temperatura;
		tempeMedia += temperatura;
		
		if(temperatura >= tempeMayor)
		{
			tempeMayor = temperatura;
		}
		if(temperatura <= tempeMenor)  
		{
			tempeMenor = temperatura;
		}
	 } 
	 
	 cout << "La temperatura media el exterior es: " << tempeMedia/6;
	 cout << "\nLa temperatura mayor del exterior es: " <<tempeMayor;
	 cout << "\nLa temperatura menor del exterior es: " <<tempeMenor;
	return 0; 
}

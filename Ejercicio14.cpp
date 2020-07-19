/*
14 En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.
Haga un algoritmo que permita la lectura de los datos y el cálculo de las estadísticas.

*/

#include <iostream>
using namespace std; 

int main ()
{
	double nota1, nota2, nota3, alMenosUno = 0, ultimoExamen = 0, todos = 0;
	
	cout << "Las notas de los estudiantes deben ser de 0 a 5 \n";
	for(int i = 1; i <= 5; i++)
	{
		cout << "\nPor favor ingrese las nota del estudiante " << i <<": ";
		for(int j = 1; j <= 3; j++)
		{
			if(j == 1)
			{
				cout << "\nIngrese la nota del examen " << j <<": ";
				cin >> nota1;
				while(nota1 < 0 || nota1 > 5)
				{
					cout << "\nIngresaste una nota por fuera del rango permitido";
					cout << "\nVuelva a ingresar la nota del examen " << j <<": ";
					cin >> nota1;
				}
			}
			else if (j == 2)
			{
				cout << "Ingrese la nota del examen " << j <<": ";
				cin >> nota2;
				while(nota2 < 0 || nota2 > 5)
				{
					cout << "\nIngresaste una nota por fuera del rango permitido";
					cout << "\nVuelva a ingresar la nota del examen " << j <<": ";
					cin >> nota2;
				}
			}
			else 
			{
				cout << "Ingrese la nota del examen " << j <<": ";
				cin >> nota3;
				while(nota3 < 0 || nota3 > 5)
				{
					cout << "\nIngresaste una nota por fuera del rango permitido";
					cout << "\nVuelva a ingresar la nota del examen " << j <<": ";
					cin >> nota3;
				}
			}	
		}
		
		if(nota1 >= 3 && nota2 >= 3 && nota3 >= 3)  todos++;
		if(nota1 < 3 && nota2 < 3 && nota3 >= 3) ultimoExamen++;
		if((nota1 >= 3) || (nota2 >= 3) || (nota3 >= 3)) alMenosUno++;	
	}
		cout << "\nEl numero de estudiantes que aprobaron todos los examentes fueron: " << todos;
		cout << "\nEl numero de estudiantes que aprobaron al menos un examen fueron: " << alMenosUno;
		cout << "\nEl numero de estudiantes que aprobaron solo el ultimo examen fueron: " << ultimoExamen;
	return 0;
}

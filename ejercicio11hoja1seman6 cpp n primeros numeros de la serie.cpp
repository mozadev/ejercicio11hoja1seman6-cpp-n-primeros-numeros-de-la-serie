/*
Escriba un programa en C++ que calcule e imprima el valor de la sumatoria de los N
primeros términos de la serie.
Ejemplo:
Ingrese N: 3
La suma es: 1.75
*/
#include <iostream>
#include<math.h>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int ingreseN()
{
	int Num;
	cout << "ingrese n "; cin >> Num;
	while (Num <= 0)
	{
		cout << "ingrese n: "; cin >> Num;
	}
	return Num;
}


float sumaserie(int Num)
{
	float suma = 0;
	for (int i = 1; i <= Num; i++)
	{
		if (i % 2 == 0)
			suma = suma - 1 / pow(2, i - 1);
		else
			suma = suma + 1 / pow(2, i - 1);
	}
	return suma;
}


int main()
{
	int Num = ingreseN();
	cout << "la suma es: " << sumaserie(Num);
	_getch();
}



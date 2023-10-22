// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 10
// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
//						la lectura de dos n�meros enteros, a partir de la relaci�n:
//						(n m)=(n!)/((n-m)!*m!)

#include <iostream>
using namespace std;
int fact(int n)
{
	if (n!=1)
		n=n*fact(n-1);
	else
		return n;
}
int main()
{
	int n1,n2;
	cout<<"n: ";
	cin>>n1;
	cout<<"m: ";
	cin>>n2;
	cout<<"El coeficiente binomial es: "<<fact(n1)/(fact(n1-n2)*fact(n2))<<endl;
	return 0;
}

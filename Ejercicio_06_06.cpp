// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 6
// Problema planteado: Realizar un algoritmo recursivo para la siguiente funci�n:
//						Q(n)=1^2 + 2^2 + 3^2 +...+ n^2
#include <iostream>
#include <math.h>
using namespace std;
int fun(int n)
{
	int s=0,i=0;
	if (n==0)
		return s;
	else{
		i++;
		s=s+pow(n,2)+fun(n-1);
	}
}
int main()
{
	int n;
	cout<<"N: ";
	cin>>n;
	cout<<"La suma de los cuadrados es: "<<fun(n);
	return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 9
// Problema planteado: Realizar un algoritmo recursivo para Generar la secuencia: 1, 1, 2, 4, 8, 16, 23,
//						28, 38, 49,..., para n t�rminos
#include <iostream>
using namespace std;
void fun(int a,int b,int s,int n,int lim)
{
	if (lim==n)
	{
		cout<<".";
	}else{
		lim++;
		cout<<b<<" ";
		s=a;
		a=b+s;
		b=a+b;
		fun(a,b,s,n,lim);
	}
}
int main()
{
	int a=0,b=1,n,lim=0,s=0;
	cin>>n;	
	fun(a,b,s,n,lim);
}

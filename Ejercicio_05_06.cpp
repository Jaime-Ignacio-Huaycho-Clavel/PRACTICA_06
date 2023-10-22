// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.
#include <iostream>
using namespace std;
int fun(int v1[],int v2[],int n,int c)
{
	int i=0;
	if (n==-1)
	{
		return c;
	}else{
		if (v1[n-1]==v2[n-1])
			c++;
		return fun(v1,v2,n-1,c);
	}
}
int main()
{
	int v1[]={2,0,8,7,1},v2[]={2,0,8,7,1},n=5,c=-1;
	if (fun(v1,v2,n,c)==n)
		cout<<"Son iguales";
	else
		cout<<"No son iguales";
	return 0;
}

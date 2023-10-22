// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al rev�s una cadena
#include <iostream>
using namespace std;
char fun(char p[],int i)
{
	char p2[20],a;
	int c=0;
	if (i==-1)
	{
		return p2[20];
	}else{
		p2[c]=p[i-1];
		i--;
		c++;
		return fun(p,i);
	}
}
int main()
{
	char p[20];
	int i=0;
	cin>>p;
	while (p[i]!='\0')
		i++;
	char b=fun(p,i);
	for (int j=0;j<i;j++)
	{
		cout<<b[j];
	}
	return 0;
}

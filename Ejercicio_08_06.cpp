// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 8 
// Problema planteado: . Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es sim�trica
#include <iostream>
using namespace std;
void reverso(char v1[],char v2[],int n)
{
	for (int k=0;k<n;k++)
	{
		v2[k]=v1[n-1-k];
	}
}
int fun(char v1[],char v2[],int n,int c)
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
{	char v1[20],v2[20];
	cout<<"cadena: ";
	cin>>v1[20];
	int n=0,c=-1;
	while (v1[n]!='\0')
		n++;
	n=5;
	cout<<n<<endl;
	reverso(v1,v2,n);
	if (fun(v1,v2,n,c)==n)
		cout<<"Son iguales";
	else
		cout<<"No son iguales";
	return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 11
// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
//						entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
//						de Ullman (en honor al matem�tico Ullman) que consiste en lo siguiente:
//						� Empiece con cualquier entero positivo.
//						� Si es par, div�dalo entre 2; si es impar multipl�quelo por 3 y agr�guele 1.
//						� Obtenga enteros sucesivamente repitiendo el proceso.
//						Al final se obtendr� el n�mero 1, independientemente del entero inicial. Por
//						ejemplo, cuando el entero inicial es 26, la secuencia ser�:
//										26 13 40 20 10 5 16 8 4 2 1
#include <iostream>
using namespace std;
void fun(int n)
{
	if ((n%2)==0)
	{
		n=n/2;
	}else{
		n=(3*n)+1;
	}
	cout<<n<<" ";
	if (n!=1)
	    fun(n);
}
int main()
{
	int n;
	cin>>n;
	cout<<n<<" ";
	fun(n);
	
	return 0;
}

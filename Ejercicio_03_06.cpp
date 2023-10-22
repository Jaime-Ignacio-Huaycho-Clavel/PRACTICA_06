// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
//                      suma de sus elementos
#include <iostream>
using namespace std;
int fun(int v[],int n)
{
    int s=0;
    if (n==-1)
    {
        return s;
    }else{
        s=s+v[n-1]+fun(v,n-1);
    }
}
int main()
{
    int v[]={4,7,2,8,9,0,2,4},n=8;
    cout<<fun(v,n);
    return 0;
}

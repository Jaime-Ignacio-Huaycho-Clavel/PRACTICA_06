// Materia: Programación I, Paralelo 4
// Autor: Jaime Ignacio HUaycho clavel
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
//                      números enteros aplicando el algoritmo de Euclides.
#include <iostream>
using namespace std;
int fun(int a,int b)
{
    if ((a%b)==0)
    {
        return b;
    }else{
        return fun(b,a%b);
    }
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<fun(a,b);
    return 0;    
}


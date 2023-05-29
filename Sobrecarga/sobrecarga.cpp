#include <iostream>
#include "sobrecarga.h"

Numero::Numero(int x1)
{
    x = x1;
}

void Numero::imprimir()
{
    cout<<"El valor de x es: "<<x<<endl;
}

Numero Numero::operator*(Numero n)
{
    int z = x * n.x;
    return Numero(z);
}
Numero Numero::operator++()
{
    return Numero(x++);
}
ostream & operator<<(ostream & COUT , Numero & n)
{
    COUT << "El valor de x sobrecargao es: "<<n.x << endl;
    return COUT;
}
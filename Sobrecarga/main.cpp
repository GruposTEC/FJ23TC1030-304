#include "sobrecarga.h"

int main()
{
    Numero n1(5);
    Numero n2(10);

    Numero n3 = n1 * n2;
    ++n1;
    n1.imprimir();      
    n3.imprimir();
    cout<<n1;
    
}
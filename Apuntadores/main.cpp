#include <iostream>

using std::cout;
using std::endl;

// void Metodo(int y)
//void Metodo(int &y)
void Metodo(int *y)
{
    cout<<"Recibo la variable 'y' y su valor es :"<<*y<<endl;
    *y = *y+1;
};


int main()
{
    int x = 1;
    cout<<"La dirección de x es: "<<&x<<endl;
    cout<<"El valor inicial de x es: "<<x<<endl;
    int *apuntador;
    apuntador = &x;
    cout<<"El apuntador apunta a: "<<apuntador<<endl;
    *apuntador = 10;
    cout<<"El valor de x es: "<<x<<endl;
    Metodo(&x);
    cout<<"El valor de x es: "<<x<<endl;
}
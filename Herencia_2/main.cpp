#include <iostream>

using std::cout;
using std::endl;

class A
{
    public:
        void imprimir()
        {
            cout<<"Metodo Imprimir en Clase A"<<endl;
        }
};

class B:virtual public A
{

    public:
    void print()
    {
        cout<<"Metodo Print Clase B"<<endl;
    }

};

class C:virtual public A
{

    public:
    void print()
    {
        cout<<"Metodo Print Clase C"<<endl;
    }
};

class D:public B, public C
{

};

int main()
{
    D objeto;
    objeto.B::print();
    objeto.C::print();
    objeto.imprimir();
    
}
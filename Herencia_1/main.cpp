#include <iostream>
using std::cout;
using std::endl;

class Base
{
    public:
        int x;
        Base(int x1)
        {
            cout<<"Constructor de base"<<endl;
            x=x1;
        }
        ~Base()
        {
            cout<<"destructor de base"<<endl;
        } 
        void imprimir()
        {
            cout<<"imprimir en base sin parametros"<<endl;
        }
        void imprimir(int num)
        {
            cout<<"Imprimir en base con parametros"<<endl;
        }
    private:
        int y;
    protected:
        int z;
};
class Derivada:public Base
{
   public:
        Derivada(int x1, int y1):Base(x1)
        {
            cout<<"Constructor de derivada"<<endl;
        }
        ~Derivada()
        {
            cout<<"destructor de derivada"<<endl;
        }
        void imprimir()
        {
            cout<<"imprimir en derivada sin parametros"<<endl;
            Base::imprimir();
        }
        
};
int main(){
    Derivada d(5,10);
    //d.x=5;
    //d.z=10; 
    cout<<"el valor de x es: "<<d.x<<endl;
    d.imprimir();
   // d.imprimir(5);
}
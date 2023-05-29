#ifndef SOBRECARGA_H
#define SOBRECARGA_H
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class Numero
{
    private:
            int x;
    public:
        Numero( int x1 );
        void imprimir();
        Numero operator * (Numero n);
        Numero operator ++();
        friend ostream & operator << (ostream & COUT , Numero & n); 

};
#endif
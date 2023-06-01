#ifndef HIJO_H
#define HIJO_H
#include <iostream>
#include <string>
#include "padre.h"
using std::string;
using std::ostream;
class Hijo: public Padre
{
    public:
        Hijo(string nom);
        friend ostream & operator << (ostream & COUT , Hijo & pa); 
        void imprimir();
        ~Hijo();
};
#endif
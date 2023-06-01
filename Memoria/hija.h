#ifndef HIJA_H
#define HIJA_H
#include <iostream>
#include <string>
#include "padre.h"
using std::string;
using std::ostream;
class Hija: public Padre
{
    public:
        Hija(string nom);
        friend ostream & operator << (ostream & COUT , Hija & pa); 
        void imprimir();
        ~Hija();
};
#endif
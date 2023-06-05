#ifndef _IMPRESORA_H
#define _IPRESORA_H
#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Impresora{
    private:
        string nombre;
        int numHojas;

    public:
        Impresora();
        Impresora(string nom, int numH);
        void imprimir(string txt);
        void agregarHojas(int n);
        friend ostream & operator << (ostream & os, Impresora & im);
};

#endif 
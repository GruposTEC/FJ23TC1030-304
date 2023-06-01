#ifndef PADRE_H
#define PADRE_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;
class Padre
{
    protected:
        string nombre;
    public:
        Padre(string nom);
        friend ostream & operator << (ostream & COUT , Padre & pa); 
        virtual void imprimir();
        virtual ~Padre();
};
#endif
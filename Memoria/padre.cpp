#include "padre.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::endl;
using std::cout;
Padre::Padre(string nom)
{
    nombre=nom;
}
ostream & operator << (ostream & COUT , Padre & pa)
{
    COUT << "Soy el papá y me llamo "<<pa.nombre<<endl;
    return COUT;
}
void Padre::imprimir()
{
    cout<<"Soy el papá y me llamo "<<nombre<<endl;
}
Padre::~Padre()
{
    cout << "destructor de padre"<<endl;
}
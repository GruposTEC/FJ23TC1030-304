#include "padre.h"
#include "hija.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::endl;
using std::cout;
Hija::Hija(string nom):Padre(nom)
{
}
ostream & operator << (ostream & COUT , Hija & pa)
{
    COUT << "Soy la hija y me llamo "<<pa.nombre<<endl;
    return COUT;
}
void Hija::imprimir()
{
    cout<<"Soy la hija y me llamo "<<nombre<<endl;
}
Hija::~Hija()
{
    cout << "destructor de hija"<<endl;
}
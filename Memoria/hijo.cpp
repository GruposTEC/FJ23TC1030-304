#include "padre.h"
#include "hijo.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::endl;
using std::cout;
Hijo::Hijo(string nom):Padre(nom)
{
}
ostream & operator << (ostream & COUT , Hijo & pa)
{
    COUT << "Soy el hijo y me llamo "<<pa.nombre<<endl;
    return COUT;
}
void Hijo::imprimir()
{
    cout<<"Soy el hijo y me llamo "<<nombre<<endl;
}
Hijo::~Hijo()
{
    cout << "destructor de hijo"<<endl;
}
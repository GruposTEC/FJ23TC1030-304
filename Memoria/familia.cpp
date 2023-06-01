#include "familia.h"
#include "hija.h"
#include "hijo.h"
using std::endl;
void Familia::agregamiembro()
{
    Hijo *ijo=new Hijo("pedrito");
    Hija *ija=new Hija("a");
    fam.push_back(ijo);
    fam.push_back(ija);
}
ostream & operator << (ostream & COUT , Familia & pam)
{
    for(int i=0;i<pam.fam.size();i++)
    {
        pam.fam[i]->imprimir();
    }
    return COUT;
}
Familia::~Familia()
{
    for(int i=0;i<fam.size();i++)
    {
        delete fam[i];
    }
}
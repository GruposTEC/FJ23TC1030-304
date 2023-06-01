#ifndef FAMILIA_H
#define FAMILIA_H
#include <vector>
#include "padre.h"
#include "hija.h"
#include "hijo.h"
using std::vector;
class Familia
{
    private:
        vector <Padre*> fam;
    public:
        void agregamiembro();
        friend ostream & operator << (ostream & COUT , Familia & n); 
        ~Familia();
};      
#endif
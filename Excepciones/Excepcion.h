#ifndef _EXCEP_H
#define _EXCEP_H
#include <iostream>
#include <string>

using std::string;

class MyExcepcion : public std::exception{
    private:
        string mensaje;
    public:
        MyExcepcion();
        MyExcepcion(string msj);
        void display();
};
#endif
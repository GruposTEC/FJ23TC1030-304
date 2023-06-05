#include <iostream>
#include <string>
#include "Impresora.h"
#include "Excepcion.h"

using std::cout;
using std::endl;
using std::string;
using std::ostream;

Impresora::Impresora(){

}

Impresora::Impresora(string nom, int numH){
    nombre = nom;
    numHojas = numH;
}

void Impresora::imprimir(string txt){
    cout << "Estoy imprimiendo: " << txt << endl;
    //Se mide la longitud del texto
    int longitud = txt.size();
    cout << "Ocupe estas hojas: " << longitud << endl;
    numHojas -= longitud;

    if(numHojas <= 0){
        // Se lanza el error
        //throw(404);
        //throw("Se me acabaron las hojas!!! UnU");
        //string s = "error como string";
        //throw(s);
        MyExcepcion myExep("lanzado como excepción");
        throw(myExep);
    }
}

ostream & operator << (ostream & os, Impresora & im){
    os << "Soy la impresora: " << im.nombre << "\nY tengo estas hojas: " << im.numHojas << endl;
    return os;
}

void Impresora::agregarHojas(int n){
    numHojas += n;
}





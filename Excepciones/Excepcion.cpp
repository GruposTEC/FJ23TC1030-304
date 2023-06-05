#include <iostream>
#include <string>
#include "Excepcion.h"

using std::cout;
using std::endl;
using std::string;

MyExcepcion::MyExcepcion(){

}

MyExcepcion::MyExcepcion(string msj){
    mensaje = msj;
}

void MyExcepcion::display(){
    cout << mensaje << endl;
}
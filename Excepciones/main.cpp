#include <iostream>
#include <string>
#include "Impresora.h"
#include "Excepcion.h"

using std::cout;
using std::endl;
using std::string;

int main(){
    Impresora imp1("Laser", 5);
    try{
        imp1.imprimir("Hola Mundo");
    }
    //Lanzo por valor recibo por referencia
    catch(int &x){ //Cacha el error de un int
        cout << "El código de error lanzado fue: " << x << endl;
    }
    catch(string &s){
        cout << "El mensaje es: " << s << endl;
    }
    //Se debe declarar constante la cedena de caracteres
    //Lo que hace es que no puede modificar lo que llegó del apuntador
    catch(char const *x){ // Cacha el error de una cadena
        cout << "La cadena de caracteres fue: " << x << endl;
    }
    catch(MyExcepcion & x){
        x.display();
    }
    catch(...){ //Cacha TODO
        cout << "Sepa que mandaste" << endl;
    }

    cout << imp1;
    imp1.agregarHojas(100);
    cout << imp1;
}
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

//Creamos la clase Ave
class Ave{
    //para que se convierta en interface, no debe tener parámetros
    public:
    //clases abstractas y virtuales puros
        virtual void volar()=0;

        virtual void nadar()=0;
};

//Clase águila
class Aguila:public Ave{
    public:
        void volar(){
            cout << "Vuelo y soy el más rápido de todos" << endl;
        }
        void nadar(){
            cout << "Yo no nado" << endl;
        }
};

class Pinguino:public Ave{
    public:
        void volar(){
            cout << "Soy el pinguino " <<nombre<<" y no puedo volar, pero me veo bien" << endl;
        }

        string nombre;

        Pinguino (string nombre){
            this-> nombre = nombre;
            // también puede arreglarse como nombre = nom;
        }

        void nadar(){
            cout << "Me encanta nadar" << endl;
        }
};

int main(){
    //No se pueden crear objetos de clases abstractas
    //Ave ave1;
    //ave1.volar();

    Aguila aguila1;
    aguila1.volar();
    
    Pinguino pinguino1("Pingu");
    pinguino1.volar();
    Pinguino pinguino2("Linux");
    pinguino2.volar();

    Ave * apAve;

    apAve =& aguila1;
    apAve->volar();
    apAve->nadar();
    apAve =& pinguino1;
    apAve->volar();
    apAve =& pinguino2;
    apAve->volar();
    apAve->nadar();

    Aguila  * ag = dynamic_cast <Aguila *> (apAve);
    cout << ag << endl;
    Pinguino  * ping = dynamic_cast <Pinguino *> (apAve);
    cout << ping << endl;
}
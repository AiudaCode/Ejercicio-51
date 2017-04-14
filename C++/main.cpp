#include <iostream>
#include "Convertir.h"

using namespace std;

int main(void)
{
    // se crea un objeto de la clase Convertir (Instanciación)
    Convertir *obj = new Convertir();
    // se declara una variable de tipo entero llamada a
    int a;
    // se pide el año
    cout << "Digite el a" << (char) 164 << "o" << endl;
    cout << ">> ";
    cin >> a;
    // se encapsula la variable a
    obj->setYear(a);
    // se muestra en pantalla el año y el siglo donde se encuentra
    cout << "A" << (char) 164 << "o: " << obj->getYear() << endl;
    cout << "Siglo: " << obj->sigloDeAnio() << endl;
}

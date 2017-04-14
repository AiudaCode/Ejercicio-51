#include "Convertir.h"

Convertir::Convertir()
{
    year = 0;
}

Convertir::~Convertir()
{
    //dtor
}

// método Set y Get del atributo de la clase
void Convertir::setYear(int val)
{
    year = val;
}

int Convertir::getYear()
{
    return year;
}

// método para devolver el siglo del año
int Convertir::sigloDeAnio()
{
    // inicializo una variable de tipo entero llamada temp, en el valor que retorne el metodo getYear
    int temp = getYear();
    // inicializo una variable de tipo entero llamada inicial, en 1
    int inicial = 1;
    // inicializo una variable de tipo entero llamada final, en 100
    int final = 100;
    // inicializo una variable de tipo entero llamada siglo, en 0
    int siglo = 0;
    // mientras el valor de la variable temp sea mayor a 0 se ejecutaran las instrucciones del ciclo while
    while (temp > 0)
    {
        // se le decrementa 100 al valor de la variable temp
        temp -= 100;
        // se le incrementa 100 al valor de la variable inicial
        inicial+=100;
        // se le incrementa 100 al valor de la variable final
        final+=100;
        // se le incrementa 1 al valor de la variable siglo
        siglo++;
    }
    // se retorna el valor de la variable siglo
    return siglo;
}

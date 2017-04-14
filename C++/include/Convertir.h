#ifndef CONVERTIR_H
#define CONVERTIR_H


class Convertir
{
    public:
        Convertir();
        virtual ~Convertir();
        // se declaran los métodos publicos
        void setYear(int val);
        int getYear();
        int sigloDeAnio();
    protected:

    private:
        // se declaran los atributos privados
        int year;
};

#endif // CONVERTIR_H

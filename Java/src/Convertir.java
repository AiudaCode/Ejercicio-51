public class Convertir
{
    // se declara el atributo privado de la clase
    private int year;
    public Convertir()
    {
        // se le asigna por defecto al atributo year el valor de 0 en el constructor de la clase
        year = 0;
    }
    
    // método Set y Get del atributo de la clase
    public void setYear(int val)
    {
        year = val;
    }
    
    public int getYear()
    {
        return year;
    }
    
    // método para devolver el siglo del año
    public int sigloDeAño()
    {
        // inicializo una variable de tipo entero llamada temp, en el valor que retorne el metodo getYear
        int temp = getYear();
        // inicializo una variable de tipo entero llamada inicial, en 1
        int inicial = 1;
        // inicializo una variable de tipo entero llamada fin, en 100
        int fin = 100;
        // inicializo una variable de tipo entero llamada siglo, en 0
        int siglo = 0;
        // mientras el valor de la variable temp sea mayor a 0 se ejecutaran las instrucciones del ciclo while
        while (temp > 0)
        {
            // se le decrementa 100 al valor de la variable temp
            temp -= 100;
            // se le incrementa 100 al valor de la variable inicial
            inicial+=100;
            // se le incrementa 100 al valor de la variable fin
            fin+=100;
            // se le incrementa 1 al valor de la variable siglo
            siglo++;
        }
        // se retorna el valor de la variable siglo
        return siglo;
    }
}

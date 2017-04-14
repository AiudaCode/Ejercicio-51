
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Convertir (Instanciación)
        Convertir obj = new Convertir();
        // se declara una variable de tipo entero llamada a
        int a = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite el año"));
        // se encapsula la variable a
        obj.setYear(a);
        // se muestra en pantalla el año y el siglo donde se encuentra
        JOptionPane.showMessageDialog(null,
            "Año: " + obj.getYear() + "\n" +
            "Siglo: " + obj.sigloDeAño());
    }
}

package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1011 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double raio = sc.nextDouble();
        double pi = 3.14159;
        double volume = ((4.0/3) * pi * (raio * raio * raio));

        System.out.printf("VOLUME = %.3f%n", volume);

        sc.close();
    }
}
// Accepted
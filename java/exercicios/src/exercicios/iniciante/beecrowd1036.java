package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1036 {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        
        double delta = (b * b) - (4 * a * c); 
        double x1,x2;
                
        if (a == 0 || delta < 0.0) {
            System.out.println("Impossivel calcular");
        }
        
        else {
            x1 = (-b + Math.sqrt(delta)) / (2.0 * a);
            x2 = (-b - Math.sqrt(delta)) / (2.0 * a);
            System.out.printf("R1 = %.5f%n", x1);
            System.out.printf("R2 = %.5f%n", x2);
        }
        sc.close();
    }
}
// Accepted
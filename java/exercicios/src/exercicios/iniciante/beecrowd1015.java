package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1015 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double x1 = sc.nextDouble();
        double y1 = sc.nextDouble();
        double x2 = sc.nextDouble();
        double y2 = sc.nextDouble();
        double distancia = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        double raiz = Math.sqrt(distancia);
    
        System.out.printf("%.4f%n", raiz);
        
        sc.close();
    }
}
// Accepted
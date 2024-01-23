package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1021 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double N =  sc.nextDouble();
        int i = 0;
        
        System.out.println("NOTAS:");
        
        i = (int) N / 100;
        System.out.printf("%d nota(s) de R$ 100.00%n", i);
        N = N % 100.0;
        
        i = (int) N / 50;
        System.out.printf("%d nota(s) de R$ 50.00%n", i);
        N = N % 50.0;
        
        i = (int) N / 20;
        System.out.printf("%d nota(s) de R$ 20.00%n", i);
        N = N % 20.0;
        
        i = (int) N / 10;
        System.out.printf("%d nota(s) de R$ 10.00%n", i);
        N = N % 10.0;
        
        i = (int) N / 5;
        System.out.printf("%d nota(s) de R$ 5.00%n", i);
        N = N % 5.0;
        
        i = (int) N / 2;
        System.out.printf("%d nota(s) de R$ 2.00%n", i);
        N = N % 2.0;

        N = N * 100;
        System.out.println("MOEDAS:");
        
        i = (int) N / 100;
        System.out.printf("%d moeda(s) de R$ 1.00%n", i);
        N = N % 100.0;
        
        i = (int) N / 50;
        System.out.printf("%d moeda(s) de R$ 0.50%n", i);
        N = N % 50.0;
        
        i = (int)N / 25;
        System.out.printf("%d moeda(s) de R$ 0.25%n", i);
        N = N % 25.0;
        
        i = (int) N / 10;
        System.out.printf("%d moeda(s) de R$ 0.10%n", i);
        N = N % 10.0;
        
        i = (int) N / 5;
        System.out.printf("%d moeda(s) de R$ 0.05%n", i);
        N = N % 5.0;
        
        i = (int) N / 1;
        System.out.printf("%d moeda(s) de R$ 0.01%n", i);
        N = N % 1.0;

        sc.close();
    }
}
// Accepted
package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1038 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int codigo = sc.nextInt();
        int qntd = sc.nextInt();
        double total;
        
        if (codigo == 1) {
            total = qntd * 4.00;
            System.out.printf("Total: R$ %.2f%n", total);
        }
        
        else if (codigo == 2) {
            total = qntd * 4.50;
            System.out.printf("Total: R$ %.2f%n", total);
        }
        
        else if (codigo == 3) {
            total = qntd * 5.00;
            System.out.printf("Total: R$ %.2f%n", total);
        }
        
        else if (codigo == 4) {
            total = qntd * 2.00;
            System.out.printf("Total: R$ %.2f%n", total);
        }

        else if (codigo == 5) {
            total = qntd * 1.50;
            System.out.printf("Total: R$ %.2f%n", total);
        }

        sc.close();
    }
}
// Accepted
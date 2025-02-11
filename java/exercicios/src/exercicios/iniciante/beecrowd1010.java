package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1010 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int codPeca1 = sc.nextInt();
        int qntPeca1 = sc.nextInt();
        double valorPorPeca1 = sc.nextDouble();
        int codPeca2 = sc.nextInt();
        int qntPeca2 = sc.nextInt();
        double valorPorPeca2 = sc.nextDouble();
        double valorPagar = qntPeca1 * valorPorPeca1 + qntPeca2 * valorPorPeca2;
        
        System.out.println("PEÇA 1: " + codPeca1);
        System.out.println("PEÇA 2: " + codPeca2);
        System.out.printf("VALOR A PAGAR: R$ %.2f%n", valorPagar);
        
        sc.close();
    }
}
// Accepted
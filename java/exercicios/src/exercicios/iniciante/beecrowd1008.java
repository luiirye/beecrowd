package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1008 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int numeroFuncionario = sc.nextInt();
        int numeroHorasTrabalhadas = sc.nextInt();
        double valorHora = sc.nextDouble();
        double calculo = numeroHorasTrabalhadas * valorHora;
        
        System.out.println("NUMBER = " + numeroFuncionario);
        System.out.printf("SALARY = U$ %.2f%n", calculo);
        sc.close();
    }
}
// Accepted
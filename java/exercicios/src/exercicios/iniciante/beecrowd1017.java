package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1017 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double tempoGasto = sc.nextDouble();
        double velocidade = sc.nextDouble();

        double minutos = tempoGasto * 60;
        double km = velocidade / 60;
        
        double litros = minutos * km / 12;
        
        System.out.printf("%.3f%n", litros);
        
        sc.close();
    }
}
// Accepted
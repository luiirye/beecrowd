package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1014 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int distanciaTotal = sc.nextInt();
        double litrosGastos = sc.nextDouble();
        double consumo = distanciaTotal / litrosGastos;
        
        System.out.printf("%.3f", consumo);
        System.out.println(" km/l");
        
        sc.close();
    }
}
// Accepted
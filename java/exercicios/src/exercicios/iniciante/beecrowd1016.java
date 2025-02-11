package exercicios.iniciante;

import java.util.Scanner;

public class beecrowd1016 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int minuto = 60;
        int km = sc.nextInt();
        
        int distancia = km * 120 / minuto;
        
        System.out.println(distancia + " minutos");

        sc.close();
    }
}
// Accepted
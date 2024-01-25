package exercicios.iniciante;

import java.util.Locale;
import java.util.Scanner;

public class beecrowd1040 {
    public static void main(String[] args) {
        
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        float N1 = sc.nextFloat();
        float N2 = sc.nextFloat();
        float N3 = sc.nextFloat();
        float N4 = sc.nextFloat();
        float media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0f;
        // media 2, 3, 4 e 1 para cada uma das notas
        // media for 7.0+ == Aluno aprovado
        // media for menor 5.0 == Aluno reprovado
        // media for entre 5.0 a 6.9 == Aluno de exame

        if (media >= 7.0) {
            System.out.printf("Media: %.1f%n", media);
            System.out.println("Aluno aprovado.");
        }

        else if (media < 5.0) {
            System.out.printf("Media: %.1f%n", media);
            System.out.println("Aluno reprovado.");
        }
        
        else if (media >= 5.0 && media <= 6.9) {
            
            double notaExame = sc.nextDouble();
            double mediaFinal = (notaExame + media) / 2.0f;
            System.out.printf("Media: %.1f%n", media);
            System.out.println("Aluno em exame.");
            System.out.printf("Nota do exame: %.1f%n", notaExame);
                
            if (mediaFinal >= 5.0) {    
                    System.out.println("Aluno aprovado.");
                    System.out.printf("Media final: %.1f%n", mediaFinal);
                }
                
                else{
                    System.out.println("Aluno reprovado.");
                    System.out.printf("Media final: %.1f%n", mediaFinal);
            }
        }
        sc.close();
    }
}
// Accepted
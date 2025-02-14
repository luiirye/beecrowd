#include <stdio.h>
#include <stdlib.h>

/*
Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno.
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

// Protótipo da função média
double media(double, double, double);

// Função principal
int main(){
    
    // Variáveis para calcular a média
    double A, B, C, MEDIA;

    // Entradas do usuário
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    // chamada da função atribuida a variável média
    MEDIA = media(A, B, C);

    // Impressão do resultado da média
    printf("MEDIA = %.1lf\n", MEDIA);
    
    return 0;
}

// Função media
double media(double a, double b, double c){
    // variáveis estáticas para calculo
    static double A = 2.0;
    static double B = 3.0;
    static double C = 5.0;

    //Variável para guardar a média.
    double media;
    
    //calculo da média
    media = ((a * A + b * B + c * C) / 10.0);

    return media;
}

//aceito
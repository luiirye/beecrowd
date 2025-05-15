/*
    Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno
    A  seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
    Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

#include <stdio.h>

// Protótipos de funções
double media(double, double, double);

int main(){
    
    double A, B, C, MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    MEDIA = media(A, B, C);
    printf("MEDIA = %.1lf/n", MEDIA);
    
    return 0;
}

//  Função Média
double media(double a, double b, double c){
    double X = 2.0, Y = 3.0, Z = 5.0;
    return (a * X + b * Y + c * Z) / 10.0;
}
/*
    Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno.
    A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
    Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

    O arquivo de entrada contém 2 valores com uma casa decimal cada um.
*/

#include <stdio.h>
#include <stdlib.h>

//  Protótipos de Funções
double media(double, double);

int main(){
    
    double A, B, MEDIA;
    scanf("%.lf", &A);
    scanf("%.lf", &B);
    MEDIA = media(A, B);
    printf("MEDIA = %.5lf\n", MEDIA);
    
    return 0;
}

double media(double x, double y){
    double A = 3.5;
    double B = 7.5;
    return (x * A + y * B) / 11.0;
}


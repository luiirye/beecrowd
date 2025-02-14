#include <stdio.h>
#include <stdlib.h>

/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno.
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

// protótipo da função de calcular média
double media(double, double);

// Função principal
int main(){

    double A, B, MEDIA; //variaveis do programa principal
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    MEDIA = media(A, B); // chamada da função e atribuiada a variável MEDIA
    
    printf("MEDIA = %.5lf\n", MEDIA);
    
    return (0);
}

// Função de calcular média
double media(double a, double b){
    static double A = 3.5; // variável dada pelo exercicio, valores definidos
    static double B = 7.5; // variável dada pelo exercicio, valores definidos
    double media = (((a * A + b * B) / 11)); // calculo da média
    return media;
}

//aceito
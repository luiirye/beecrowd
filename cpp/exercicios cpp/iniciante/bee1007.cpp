#include <stdio.h>
#include <stdlib.h>

/*
Leia quatro valores inteiros A, B, C e D.
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
*/

// protótipo da função diferença
int diferenca(int, int, int, int);

// Função principal
int main(){

    // variáveis para calcular a diferença entre seus produtos
    int a, b, c, d;
    int DIFERENCA; // variável para guardar a diferença
    
    // entrada do usuário
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // chamada da função atribuiada a uma variável DIFERENCA
    DIFERENCA = diferenca(a, b, c, d);

    // impressão do resultado da diferença
    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}

// função diferença
int diferenca(int A, int B, int C, int D){
    int dif = (A * B - C *D); // formula para calcular a diferença
    return dif;
}

// aceito
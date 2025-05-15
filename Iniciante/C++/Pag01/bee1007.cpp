/*
    Leia quatro valores inteiros A, B, C e D. 
    A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.
    fórmula: DIFERENCA = (A * B - C * D).
*/

#include <stdio.h>
#include <stdlib.h>

//  Protótipos de Funções
int dif(int, int ,int, int);

//  Função Principal
int main(){

    int A, B, C, D, DIFERENCA;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DIFERENCA =dif(A, B, C, D);

    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}

int dif(int a, int b,int c, int d){
    return (a * b - c * d);
}

//  Accepted

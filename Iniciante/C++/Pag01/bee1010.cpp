/*
    ler o código de uma peça 1, o número de peças 1
    ler valor unitário de cada peça 1, o código de uma peça 2
    ler número de peças 2 e o valor unitário de cada peça 2.
    Após, calcule e mostre o valor a ser pago.
*/

//  Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//  Protótipos de funções
double calculo(int, int, double, double);

//  Função principal
int main(){
    
    // Código peças
    int A, B;
    // quantidades
    int a, b;
    // valores
    double x, y;
    // armazenar resultado da soma;
    double soma;

    scanf("%d %d %lf", &A, &a, &x);
    scanf("%d %d %lf", &B, &b, &y);
    
    soma = calculo(a, b, x, y);

    printf("VALOR A PAGAR: R$ %.2lf\n", soma);
    
    return 0;
}

// Funções
double calculo(int x1, int x2, double y1, double y2){
    //  x1 =  quantidade de peças 1
    //  y1 =  valor da peça 1
    //  x2 =  quantidade de peças 2
    //  y2 =  valor da peça 2  
    return x1 * y1 + x2 *y2;
}

// Accepted
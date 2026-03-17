/*
    O maior.
    Leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
    Fórmula: (a+b + abs (a-b)) / 2
*/

//  Bibliotecas.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>

//  Protótipos de Funções.
int maior(int, int, int);

//  Função Principal.
main(){
    
    //  Variáveis
    int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    D = maior(A, B, C);

    printf("%d eh o maior\n", D);
    
    return 0;
}

// Funções
int maior(int a, int b, int c){
    
    int maiorAB = (a + b + abs(a - b)) / 2;
    int maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;

    return maiorABC;
}

// Accepted
#include <stdio.h>
#include <stdlib.h>

/*
Leia dois valores inteiros.
A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD.
A seguir mostre a variável PROD com mensagem correspondente.
*/

// Protótipo da função produto
int produto(int, int);

int main(){
    
    int x, y, PROD;                 // variáveis 
    
    scanf("%d", &x);                // entrada do usuário
    scanf("%d", &y);                // entrada do usuário

    PROD = produto(x, y);           // resultado do produto atribuido a variável PROD

    printf("PROD = %d\n", PROD);    // impressão do resultado do produto
    
    return (0);
}

// Função para calcular um produto entre dois números inteiros
int produto(int a, int b){
    int PROD;
    PROD = (a * b);
    return PROD;
}

//aceito
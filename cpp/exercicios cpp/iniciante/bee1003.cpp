#include <stdio.h>
#include <stdlib.h>

/*
Leia dois valores inteiros, no caso para variáveis A e B.
A seguir, calcule a soma entre elas e atribua à variável SOMA.
A seguir escrever o valor desta variável.
*/

//Protótipo da função soma
int soma_simples(int, int);

//Função principal
int main(){
    
    int a, b, SOMA;
    scanf("%d", &a);
    scanf("%d", &b);
    SOMA = soma_simples(a, b);
    printf("SOMA = %d\n", SOMA);    
    return(0);
}

//Função soma
int soma_simples(int A, int B){
    int soma = (A + B);
    return soma;
}

//aceito
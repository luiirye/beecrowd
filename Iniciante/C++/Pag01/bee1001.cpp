/*
Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. 
Imprima X conforme exemplo apresentado abaixo. 
Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
*/

#include <stdio.h>

int soma(int, int);

int main(){
    int X, A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    X = soma(A, B);
    printf("X = %d\n", X);
}

int soma(int a, int b){
    return a + b;
}

// Accepted
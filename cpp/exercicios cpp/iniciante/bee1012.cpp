#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C.
Em seguida, calcule e mostre:

a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
*/

//protótipos das funções
double triangulo(double, double);
double circulo(double);
double trapezio(double, double, double);
double quadrado(double);
double retangulo(double, double);

// Função principal
int main(){
    
    // variáveis para calculo das áreas
    double A, B, C;

    // entradas do usuário
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    // variáveis para atribuir as chamadas de funções
    double tri, cir, tra, qua, ret;

    // Atribuindo as funções
    tri = triangulo(A, C);
    cir = circulo(C);
    tra = trapezio(A, B, C);
    qua = quadrado(B);
    ret = retangulo(A, B);
    
    // Impressão das Áreas
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ret);
    
    return 0;
}

/*Funções*/

// Função que calcula a área de um triangulo
double triangulo(double a, double b){
    double area = ((a * b) / 2);
    return area;
}

// Função que calcula a área de um circulo
double circulo(double a){
    static double pi = 3.14159;
    double area = (pi * (a * a));
    return area; 
}

// Função que calcula a área de um trapézio
double trapezio(double a, double b, double c){
    double area = ((a + b) * c / 2);
    return area;
}

// Função que calcula a área de um quadrado
double quadrado(double a){
    double area = (a * a);
    return area;
}

// Função que calcula a área de um retângulo
double retangulo(double a, double b){
    double area = a * b;
    return area;
}


// aceito


/*
    leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
    a) a área do triângulo retângulo que tem A por base e C por altura.
    b) a área do círculo de raio C. (pi = 3.14159)
    c) a área do trapézio que tem A e B por bases e C por altura.
    d) a área do quadrado que tem lado B.
    e) a área do retângulo que tem lados A e B.
*/

//  Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Protótipos
double triangulo(double, double);
double circulo(double);
double trapezio(double, double, double);
double quadrado(double);
double retangulo(double, double);

// Função Principal
int main(){
    
    //  variáveis
    double A, B, C;
    
    //  Leitura 
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Variáveis para armazenar as funções
    double a, b, c, d, e;

    a = triangulo(A, C);
    b = circulo(C);
    c = trapezio(A, B, C);
    d = quadrado(B);
    e = retangulo(A, B);

    // Impressões
    
    printf("TRIANGULO: %.3lf\n", a);
    printf("CIRCULO: %.3lf\n", b);
    printf("TRAPEZIO: %.3lf\n", c);
    printf("QUADRADO: %.3lf\n", d);
    printf("RETANGULO: %.3lf\n", e);
    
    return 0;

}

// Variáveis Globais
double pi = 3.14159;

//  Funções
double triangulo(double a, double c){
    //  a = base
    //  c = altura
    return a * c / 2.0;
}

double circulo(double c){
    //  c = raio
    return pi * (c * c);
}

double trapezio(double a, double b, double c){
    //  a = base menor
    //  b = base maior
    //  c = altura
    return (a+b)*c/2.0;
}

double quadrado(double a){
    //  a = base.
    return a * a;
}

double retangulo(double a, double b){
    //  a = base
    //  b = altura
    return a * b;
}

// Accepted
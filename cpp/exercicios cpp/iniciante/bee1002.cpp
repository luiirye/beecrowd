#include <stdio.h>
#include <stdlib.h>

/*
A fórmula para calcular a área de uma circunferência é: area = π . raio2.
Considerando para este problema que π = 3.14159:

Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
*/

double area(double);

int main(){
    
    double a, x;
    scanf("%lf", &x);
    a = area(x);
    printf("A=%.4lf\n", a);
    return (0);
    
}

double area(double raio){
    static double pi = 3.14159;
    double area;
    area = (pi * (raio * raio));
    return area; 
}

//aceito
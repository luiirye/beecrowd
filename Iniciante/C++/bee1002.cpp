/*
A fórmula para calcular a área de uma circunferência é: area = π . raio2
Considerando para este problema que π = 3.14159:
Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
*/

#include <stdio.h>

double circ(double);

int main(){
    
    double R2, arm;
    scanf("%lf", &R2);
    arm = circ(R2);
    printf("A=%.4lf\n", arm);
    return 0;
}

double circ(double r2){
    double pi = 3.14159;
    return pi * (r2 * r2);
}

// Accepted
/*
    Calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
    A fórmula para calcular o volume é: (4/3) * pi * R3. 
    Considere (atribua) para pi o valor 3.14159.
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Protótipos de funções.
double esfera(double);

//  Função principal.
int main(){
    
    double r;
    scanf("%lf", &r);
    double m = esfera(r);
    printf("VOLUME = %.3lf\n", m);
    
    return 0;
}

//  Variável Global.
double pi = 3.14159;

//  Funções.
double esfera(double raio){
    
    double r3 = raio * raio * raio;
    
    return (4/3.0) * pi * r3;
}

// Accepted
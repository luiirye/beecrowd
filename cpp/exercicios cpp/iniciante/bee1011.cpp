#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3),
pois algumas linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro.
*/

// protótipo da funçaõ calcule círculo
double calcula_circulo(double);

// Função Principal
int main(){

    // variáveis definidas
    double R, VOLUME;

    // entrada do usuário
    scanf("%lf", &R);

    // chamada da funçaõ atribuida a variável VOLUME
    VOLUME = calcula_circulo(R);

    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}

// Funçao calcula circulo
double calcula_circulo(double R){
    static double pi = 3.14159;
    double volume = (4.0/3.0) * pi * (R * R * R);  // R ao cubo
    return volume;
}

// aceito

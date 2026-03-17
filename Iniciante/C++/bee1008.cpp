/*
    Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário
    A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

//  Protótipos de Funções
double salario(int, double);

//  Função Principal
int main(){
    
    int N, H;
    double sal, calculado;
    scanf("%d", &N);
    scanf("%d", &H);
    scanf("%lf", &sal);

    calculado = salario(H,sal);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", N, calculado);
    
    return 0;
}

double salario(int y, double z){
    //  Y = número de horas trabalhadas.
    //  Z = Valor que recebe por hora trabalhada.
    return z * y;
}

// Accepted
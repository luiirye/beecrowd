#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

// protótipo da função salário
double salario(int, double);

// função principal
int main(){

    //variáveis para funcionário
    int num, hora;
    double valor_hora, sal;

    // entrada para o numero do funcionario
    scanf("%d", &num);

    // entrada para as horas
    scanf("%d", &hora);

    // entrada valor por hora
    scanf("%lf", &valor_hora);
    
    // chamada da função atribuiada a variável sal
    sal = salario(hora, valor_hora);

    // impressão das informações do funcionário
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, sal);
    
    return 0;
}

// função salário
double salario(int horas, double valor){
    double salario = (horas * valor); // variável que recebe o calculo do salário pelas horas
    return salario;
}

// aceito
#include <stdio.h>
#include <stdlib.h>

/*
SALÁRIO COM BÔNUS
Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
*/

// protótipo função salário
double calcula_salario(double, double);

// função principal
int main(){

    // variáveis de funcionario
    char nome[100];
    double valor_fixo, total_vendas;

    // entradas do usuário : nome
    scanf("%99s", &nome[100]);
    
    // entradas do usuário : valor fixo
    scanf("%lf", &valor_fixo);
    
    // entradas do usuário : total de vendas
    scanf("%lf", &total_vendas);

    // variável para atribuar a função calcula salario
    double total = calcula_salario(valor_fixo, total_vendas);

    // impressão total salário 
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}

// função calcula salario
double calcula_salario(double fixo, double vendas){
    double bonus;
    bonus = ((vendas * 0.15) + fixo);
    return bonus;
}

// aceito
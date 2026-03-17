/*
    Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
    Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

//  Protótipos de Funções
double comissao(double, double);

//  Função Principal
int main(){

    char nome[30];
    double fixo, vhoras;
    scanf("%s", nome);
    scanf("%lf", &fixo);
    scanf("%lf", &vhoras);

    double x = comissao(fixo, vhoras);

    printf("TOTAL = R$ %.2lf\n", x);

    return 0;
}

// Funções
double comissao(double f, double v){
    //  f = fixo
    //  v = vendas em dinheiro
    double com = f + ((v*15/100));
    
    return com;
}

//  Accepted
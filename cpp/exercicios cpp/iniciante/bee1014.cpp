#include <stdio.h>
#include <stdlib.h>

/*
Calcule o consumo médio de um automóvel sendo fornecidos: 
a distância total percorrida (em Km) e o total de combustível gasto (em litros).
*/

// protótipos de funções
double consumo(int, double);

// Função principal
int main(){
    
    // Variáveis para km e litros
    int km;
    double l;

    // Entrada de dados do usuário
    scanf("%d", &km);
    scanf("%lf", &l);

    // variávei para chamada da função
    double chamada = consumo(km, l);

    // impressão dos resultados
    printf("%.3lf", chamada);
    printf(" km/l\n");

    return (0);
}

// Funções
double consumo(int x, double y){
    double total = x / y;
    return total;
}

// aceito
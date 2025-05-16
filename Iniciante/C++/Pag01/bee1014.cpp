/*
    Calcule o consumo médio de um automóvel.
    sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

    O arquivo de entrada contém dois valores:
     um valor inteiro X representando a distância total percorrida (em Km)
     um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.
*/

//  Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//  protótipos de funções
double consumo(int, double);

//  Função Principal
int main(){
    
    int X;
    double Y, cons;

    scanf("%d", &X);
    scanf("%lf", &Y);

    cons = consumo(X, Y);

    printf("%.3lf km/l\n", cons);
    
    return 0;
}

// Funções
double consumo(int x, double y){
    return x * 1000.00 / y;
}
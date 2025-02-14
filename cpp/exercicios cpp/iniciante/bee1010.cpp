#include <stdio.h>
#include <stdlib.h>

/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2.
Após, calcule e mostre o valor a ser pago.
*/

// Protótipo função pecas
double pecas(int, double, int, double);

// Função principal
int main(){

    // Variáveis para peças
    int cod_peca1, num_pecas1, cod_peca2, num_pecas2;
    double valor_peca1, valor_peca2;

    // Entrada do usuário
    scanf("%d", &cod_peca1);
    scanf("%d", &num_pecas1);
    scanf("%lf", &valor_peca1);
    scanf("%d", &cod_peca2);
    scanf("%d", &num_pecas2);
    scanf("%lf", &valor_peca2);

    // variável total criada
    double total;
    
    // chamada da função atribuida e oassada para variável total
    total = pecas(num_pecas1, valor_peca1, num_pecas2, valor_peca2);
    
    // impressão do resultado da funçaõ
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}

// Função pecas
double pecas(int quantidade, double valor, int quantidade_2, double valor_2){
    double valor_pagar = ((valor * quantidade) + (valor_2 * quantidade_2));
    return valor_pagar;
}

// aceito
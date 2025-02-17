#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2)
e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:

Distancia = raiz (x2 - x1)² + (y2 - y1)²
*/

// Protótipo de funções
float distancia(float, float, float, float);

// Função principal
int main(){

    // variáveis para calcular 
    float X1, X2, Y1, Y2;

    // entrada de dados do usuário
    scanf("%f", &X1);
    scanf("%f", &Y1);
    scanf("%f", &X2);
    scanf("%f", &Y2);

    // variável para chamada da função
    float raiz = distancia(X1, Y1, X2, Y2);
    float r = sqrt(raiz);

    // impressões 
    printf("%.4f", r);
    return 0;
}

// Funções
float distancia(float x1, float y1, float x2, float y2){
    
    float distancia = ((x2 - x1) * 2) + ((y2 + y1) * 2);
    return distancia;
}
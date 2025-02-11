#include <stdio.h>
#include <stdlib.h>

/*
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano.
A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
*/

/*
Se o ponto estiver na origem, escreva a mensagem “Origem”.
Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
*/

float quadrantes(float, float);

int main(){
    float X, Y;

    printf("Informe dois valores decimais quaisquer:\n");
    printf("Informe o primeiro valor decimal:\n");
    scanf("%f", &X);
    printf("Informe o segundo valor decimal:\n");
    scanf("%f", &Y);

    quadrantes(X, Y);

}

float quadrantes(float x, float y){
    if(x > 0.0 && y > 0.0){
        printf("Primeiro Quadrante\n");
    }

    else if(x < 0.0 && y > 0.0 ){
        printf("Segundo Quadrante\n");
    }

    else if(x < 0.0 && y < 0.0 ){
        printf("Terceiro Quadrante\n");
    }

    else if(x > 0.0 && y < 0.0 ){
        printf("Quarto Quadrante\n");
    }

    else if (x && y == 0)
    {
        printf("Ponto de Origem");
    }
}
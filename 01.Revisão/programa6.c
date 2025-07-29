#include <stdio.h>

int main() {
    float x, y;

    printf("Digite a coordenada X: ");
    scanf("%f", &x);
    printf("Digite a coordenada Y: ");
    scanf("%f", &y);

    if (x == 0 && y == 0){
        printf("O ponto esta na ORIGEM.\n");
    }
    if (x == 0){
        printf("O ponto esta sobre o eixo Y.\n");
    }
    if (y == 0){
        printf("O ponto esta sobre o eixo X.\n");
    }
    if (x > 0 && y > 0){
        printf("O ponto esta no 1o QUADRANTE.\n");
    }
    if (x < 0 && y > 0){
        printf("O ponto esta no 2o QUADRANTE.\n");
    }
    if (x < 0 && y < 0){
        printf("O ponto esta no 3o QUADRANTE.\n");
    }
    if (x > 0 && y < 0){
        printf("O ponto esta no 4o QUADRANTE.\n");
    }

    return 0;
}
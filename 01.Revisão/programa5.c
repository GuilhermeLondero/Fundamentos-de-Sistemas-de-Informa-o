/*Sortear TAM números no vetor, porém não inserir números que
já estejam no vetor, ao final, exibir os valores*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int vetor[TAM];
    srand(time(NULL));
    int numero, posicaoUltimoNumero = 0, jaInserido;
    for(int i = 0; i < TAM; i++){
        numero = rand() % 100;
        jaInserido = 0;
        for (int j = 0; j <= posicaoUltimoNumero; j++){
            if (numero == vetor[j]){
                jaInserido = 1;
                printf("Numero repetido gerado...\n");
                break;
            }
        }
        if (jaInserido == 0){
            vetor[posicaoUltimoNumero] = numero;
            posicaoUltimoNumero++;
        }
    }
    for (int i = 0; i < posicaoUltimoNumero; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    return 1;
}
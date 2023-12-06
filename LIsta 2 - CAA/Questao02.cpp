#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas) {
    int **matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
    return matriz;
}

void desalocarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int** multiplicarMatrizes(int **A, int **B, int n) {
    if (n == 1) {
        int **C = alocarMatriz(1, 1);
        C[0][0] = A[0][

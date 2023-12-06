#include <stdio.h>

int encontrarElementoMajoritario(int nums[], int n) {
    int candidato = nums[0];
    int contagem = 1;

    // Fase de votação
    for (int i = 1; i < n; i++) {
        if (contagem == 0) {
            candidato = nums[i];
            contagem = 1;
        } else if (nums[i] == candidato) {
            contagem++;
        } else {
            contagem--;
        }
    }

    // Verificar se o candidato é realmente majoritário
    contagem = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidato) {
            contagem++;
        }
    }

    if (contagem > n / 2) {
        return candidato;
    }

    // O código assume que sempre há um elemento majoritário,
    // então este retorno nunca deve ser alcançado.
    return -1;
}

int main() {
    int nums[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int tamanho = sizeof(nums) / sizeof(nums[0]);

    int majoritario = encontrarElementoMajoritario(nums, tamanho);

    printf("Elemento majoritario: %d\n", majoritario);

    return 0;
}


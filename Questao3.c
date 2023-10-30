#include <stdio.h>
#include <string.h>

// Função para ler uma matriz 4x4
void lerMatriz(int matriz[4][4], const char *nome) {
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para somar duas matrizes 4x4
void somarMatrizes(int matrizA[4][4], int matrizB[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

// Função para subtrair duas matrizes 4x4
void subtrairMatrizes(int matrizA[4][4], int matrizB[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

// Função para multiplicar duas matrizes 4x4
void multiplicarMatrizes(int matrizA[4][4], int matrizB[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

// Função para exibir uma matriz 4x4 com formatação de largura 4
void exibirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];
    char operacao[5];

    lerMatriz(matrizA, "A");
    lerMatriz(matrizB, "B");

    
    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        somarMatrizes(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "sub") == 0) {
        subtrairMatrizes(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "mult") == 0) {
        multiplicarMatrizes(matrizA, matrizB, resultado);
    } 

    exibirMatriz(resultado);

    return 0;
}

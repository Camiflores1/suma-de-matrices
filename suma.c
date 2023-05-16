#include <stdio.h>

#define Fil 3
# define Colum 3

// Definimos una función para sumar dos matrices de la misma dimensión
void sumarMatrices(int matrizA[Fil][Colum], int matrizB[Fil][Colum], int filas, int columnas, int resultado[Fil][Colum]) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

// Previo a la función, se imprimira la matriz
void imprimirMatriz(int matriz[Fil][Colum], int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[Fil][Colum];
    int matrizB[Fil][Colum];
    int resultado[Fil][Colum];
    int filas, columnas;
    int i, j;

    // Determinamos el número de filas y columnas de las siguientes matrices
    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    // El usuario ingresará los elementos de la matriz A
    printf("Ingrese los elementos de la matriz A:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    // El usuario ingresará los elementos de la matriz B
    printf("Ingrese los elementos de la matriz B:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }
    // Se define la suma de matrices
    sumarMatrices(matrizA, matrizB, filas, columnas, resultado);
    // Resultado final
    printf("La matriz resultante es:\n");
    imprimirMatriz(resultado, filas, columnas);

    return 0;
}
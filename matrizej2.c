#include <stdio.h>

int main() {
    int colum, fil;
    printf("Ingrese el número de columnas: ");
    scanf("%d", &colum);
    printf("Ingrese el número de filas: ");
    scanf("%d", &fil);

    int matriz[colum][fil];

    // la matriz está en cero
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < fil; j++) {
            matriz[i][j] = 0; 
        }
    }

    // Se establece la diagonal principal en uno
    int min_dimension = (colum< fil) ? colum : fil; 
    for (int i = 0; i < min_dimension; i++) {
        matriz[i][i] = 1; 
    }

    // Se imprime la matriz resultante
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < fil; j++) {
            printf("%d ", matriz[i][j]); 
        }
        printf("\n"); 

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializarmatriz(int **mat, int fil, int col) {

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            mat[i][j] = rand() % ((10 - 1 + 1) +  1);
        }
    }    
}

int calculaminimo(int **mat, int fil, int col) {
    int min = **mat;

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }

    return min;
}

int main() {
    
    srand(time(NULL));

    int fil, col;

    int **mat;

    printf("\nIntroduzca el número de filas: ");
    scanf("%d", &fil);
    printf("\nIntroduzca el número de columnas: ");
    scanf("%d", &col);

    while (fil < 0) {
        printf("\nError en las filas, introduzca un número positivo: ");
        scanf("%d", &fil);
    }

    while (col < 0) {
        printf("\nError en las columnas, introduzca un número positivo: ");
        scanf("%d", &col);
    }

    mat = (int **) malloc(fil * sizeof(int *));
    for (int i = 0; i < fil; i++) {
        mat[i] = (int *) malloc(col * sizeof(int));
    }

    inicializarmatriz(mat, fil, col);

    printf("\n\n\n\x1B[3mPara asegurarnos comprobamos el contenido de la matriz: \x1B[0m");
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            printf("\n\n\t\x1B[3mEl valor en la posición fila %d y columna %d es: %d\x1B[0m", i, j, mat[i][j]);
        }
    }

    printf("\n\n\n\nEl valor minimo es: %d", calculaminimo(mat, fil, col));

    printf("\n\nLa matriz de números es: \n\n");
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializarmatriz(int **mat, int fil, int col) {

    srand(time(NULL));

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            mat[i][j] = rand() % ((10 - (-10) + 1) +  (-10)); // Entre - 10 y 10
        }
    }    
}

int minimoFilas(int **mat, int *vec, int fil, int col) {

    int min;

    for (int i = 0; i < fil; i++) {
        min = mat[i][0];
        for (int j = 0; j < col; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
        vec[i] = min;
    }

    return min;

}

int main() {

    int** mat;

    int* vec;

    int fil, col;

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

    vec = (int*)malloc(fil * sizeof(int));

    inicializarmatriz(mat, fil, col);

    minimoFilas(mat, vec, fil, col);

    printf("\nLa matriz es: \n");
    for(int i = 0; i < fil; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nEl valor minimo de cada fila es: \n");
    for(int i = 0; i < fil; i++) {
        printf("%d  ", vec[i]);
    }

    free(vec);

    free(mat);

    return 0;

}
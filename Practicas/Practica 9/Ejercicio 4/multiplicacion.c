#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializarmatriz(int **mat1, int **mat2, int n) {

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat1[i][j] = rand() % ((10 - 1 + 1) + 1); 
            mat2[i][j] = rand() % ((10 - 1 + 1) + 1); 
        }
    }    
}

int multiplica(int **mat1, int **mat2, int **mat3, int n) {


    for (int i = 0; i < n; i++) {
        for (int x = 0; x < n; x++) {
            int sum = 0;
            for (int z = 0; z < n; z++) {
                sum += mat1[i][z] * mat2[z][x];
            }
            mat3[i][x] = sum;
        }
    }
}

int main() {

    int **mat1, **mat2, **mat3;

    int n;

    printf("\nIntroduzca el número de filas y columnas: ");
    scanf("%d", &n);

    while (n < 0) {
        printf("\nError, introduzca un número positivo: ");
        scanf("%d", &n);
    }

    mat1 = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        mat1[i] = (int *) malloc(n * sizeof(int));
    }

    mat2 = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        mat2[i] = (int *) malloc(n * sizeof(int));
    }

    mat3 = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        mat3[i] = (int *) malloc(n * sizeof(int));
    }

    inicializarmatriz(mat1, mat2, n);

    multiplica(mat1, mat2, mat3, n);

    printf("\nLa matriz 1 es: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nLa matriz 2 es: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nLa matriz resultante es: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", mat3[i][j]);
        }
        printf("\n");
    }

    free(mat1);

    free(mat2);

    free(mat3);

    return 0;

}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void matriz(int mat[3][6]) {
    
    srand(time(NULL));
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            mat[i][j] = rand() % ((10 + 1 - 1) + 1);
        }
    }
}

void sumaColumnas(int mat[3][6], int vec[6]) {
    
    for (int j = 0; j < 6; j++) {
        vec[j] = 0;
        for(int i = 0; i < 3; i++) {
            vec[j] += mat[i][j];
        }
    }
}

int main() {
    
    int mat[3][6], vec[6];
    
    matriz(mat);
    
    sumaColumnas(mat, vec);
    
    printf("\nLa matriz es: \n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    
    int resultado = 0;
    
    for (int i = 0; i < 6; i++) {
        printf("\nLa columna %d da: %d", i+1, vec[i]);
    }

    
    return 0;
}
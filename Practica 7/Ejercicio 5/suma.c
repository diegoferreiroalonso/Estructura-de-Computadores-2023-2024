#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 6

void matriz(int mat[N][N]) {
    
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = rand() % ((10 + 1 - 1) + 1);
        }
    }
}

int suma(int mat[N][N]) {
    
    int res = 0;
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res += res + mat[i][j];
        }
    }
    return res;
}

int main() {
    
    int mat[N][N];
    
    matriz(mat);
    
    int resultado = suma(mat);
    
    printf("\nLa matriz es: \n");
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nLa suma de los elementos de la matriz es: %d", resultado);
    
    return 0;
}
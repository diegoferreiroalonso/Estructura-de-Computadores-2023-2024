#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 3

void inicializa(int mat[N][N], int x) {
    
    srand(x);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = rand() % ((5 - 1 + 1) +1); 
        }
    }
}

void producto(int mat1[N][N], int mat2[N][N], int mat3[N][N]) {
    
    for (int i = 0; i < N; i++) {
        for (int x = 0; x < N; x++) {
            int sum = 0;
            for (int z = 0; z < N; z++) {
                sum += mat1[i][z] * mat2[z][x];
            }
            mat3[i][x] = sum % (5 - 1 + 1) +1;
        }
    }
}

void imprime(int mat[N][N], int n) {
    
    printf("\nLa matriz %d es: \n", n);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int mat1[N][N], mat2[N][N], mat3[N][N];

    inicializa(mat1, time(NULL));
    inicializa(mat2, time(NULL) + 1);

    producto(mat1, mat2, mat3);

    imprime(mat1, 1);
    imprime(mat2, 2);
    imprime(mat3, 3);
    
    return 0;
}
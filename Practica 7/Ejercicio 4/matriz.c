#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz(int mat[5][5]) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            mat[i][j] = 3 + rand() % ((15 - 3 +1) +1 );
        }
    }
}

int main() {

    srand(time(NULL));

    int mat[5][5];

    matriz(mat);

    printf("\nLa matriz es: \n\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%02d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
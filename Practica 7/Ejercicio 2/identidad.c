#include <stdio.h>

int matriz(int mat[9][9]) {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == j) {
                mat [i][j] = 1;
            } else {
                mat [i][j] = 0;
            }
        }
    }

}

int main() {
    
    int mat[9][9];

    matriz(mat);

    printf("\nLa matriz identidad es: \n\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
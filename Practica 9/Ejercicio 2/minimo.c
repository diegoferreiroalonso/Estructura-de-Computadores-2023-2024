#include <stdio.h>
#include <stdlib.h>

int calculaminimo() {

}

int main() {

    int fil, col;

    int *mat;

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
    return 0;
}
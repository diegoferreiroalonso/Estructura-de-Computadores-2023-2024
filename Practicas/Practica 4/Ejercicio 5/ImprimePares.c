#include <stdio.h>

int imprime_pares_intervalo(int num1, int num2) {

    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            printf("\nLos números pares entre %d y %d son: ", num1, num2);
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {

    int num1, num2;

    printf("\nPorfavor, introduzca un número: ");
    scanf("%d", &num1);

    printf("\nPorfavor, introduzca otro número: ");
    scanf("%d", &num2);

    while (num1 > num2) {
        printf("\nError, introduzca unos números validos");

        printf("\nVuelva a introducir un número valido: ");
        scanf("%d", &num1);

        printf("\nVuelva a introducir otro número valido: ");
        scanf("%d", &num2);
    }

    imprime_pares_intervalo(num1, num2);
    
    return 0;
}
#include <stdio.h>

int calcula_multiplos_intervalo(int a, int b, int c) {

    int multiplos = 0;

    for(int i = a; i <= b; i++) {
        if (i % c == 0) {
            multiplos++;
        }
    }
    return multiplos;
}

int main() {

    int a, b, c;

    printf("Introduzca un número: ");
    scanf("%d", &a);

    printf("Introduzca otro número: ");
    scanf("%d", &b);

    printf("Introduzca otro número: ");
    scanf("%d", &c);

    while(a > b || c <= 0) {
        printf("\nError, asegúrese de que el primer número es menor que el segundo y que el tercero es positivo.\n\n");

        printf("Vuelva a introducir un número: ");
        scanf("%d", &a);

        printf("Vuelva a introducir otro número: ");
        scanf("%d", &b);

        printf("Vuelva a introducir otro número: ");
        scanf("%d", &c);
    }

    int resultado = calcula_multiplos_intervalo(a, b, c);
    printf("\nHay %d múltiplos de %d desde %d hasta %d", resultado, c, a, b);

    return 0;
}
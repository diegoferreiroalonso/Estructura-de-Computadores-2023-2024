#include <stdio.h>

int potencia(int bas, int exp) {
    int res;
    res = bas *= exp;
    return res;
}

int main() {

    int bas, exp;

    printf("\nIntroduce la base: ");
    scanf("%d", &bas);

    printf("\nIntroduce el exponente: ");
    scanf("%d", &exp);

    while (bas < 0 || exp < 0) {
        printf("\nError, números nno válidos");
        printf("\nVuelva a introducir la base: ");
        scanf("%d", &bas);
        printf("\nVuelve a introducir el exponente: ");
        scanf("%d", &exp);
    }

    int resultado = potencia(bas, exp);
    printf("\nEl resultado de elevar %d a %d es: %d", bas, exp, resultado);

    return 0;
}
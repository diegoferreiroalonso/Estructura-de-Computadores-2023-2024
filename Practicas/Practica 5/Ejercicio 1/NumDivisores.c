#include <stdio.h>

int calcula_divisores (int num) {

    int divisores = 0;

    for (int i = 1; i <= num; i++) {
        if(num % i == 0) {
            divisores++;
        }
    }
    return divisores;
}

int main() {

    int num;

    printf("Escriba un número: ");
    scanf("%d", &num);
    
    while (num <= 0) {
        printf("Error, introduzca un número positivo");
        scanf ("%d", &num);
    }

    int resultado = calcula_divisores(num);

    printf("Los divisores de %d son: %d\n", num, resultado);

    return 0;
}
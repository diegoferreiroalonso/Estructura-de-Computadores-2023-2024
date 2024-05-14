#include <stdio.h>

int calcula_divisores (int num) {

    int divisores = 0;

    for (int i = 1; i <= num; i++) {
        if(num % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2){
        printf ("El número es primo");
    } else {
        printf ("El número no es primo");
    }
    return divisores;
}

int main() {

    int num;

    printf("Escriba un número: ");
    scanf("%d", &num);
    
    while (num <= 0) {
        printf("Error, introduzca un número positivo");
        printf("\nEscriba un número: ");
        scanf ("%d", &num);
    }

    int resultado = calcula_divisores(num);

    return 0;
}
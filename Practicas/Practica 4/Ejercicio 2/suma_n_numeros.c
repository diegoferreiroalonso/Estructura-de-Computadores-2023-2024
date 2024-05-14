#include <stdio.h>

void suma_n_numeros_nums(int num) {
    int i;
    int suma = 0;
    for (i = 1; i <= num; i++) {
        suma += i;
    }

    printf("La suma de los primeros %d números enteros es: %d\n", num, suma);
    
}

int main() {

    int num;

    printf("Escriba un número: ");
    scanf("%d", &num);

    if (num >= 0) {
        suma_n_numeros_nums(num);
    } else {
        printf("Error, introduzca un número positivo");
    }

    return 0;
}
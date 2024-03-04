#include <stdio.h>

int calcula_unos(int num) {
    int binario = 0;

    while (num > 0) {
        binario += num & 1;
        num >>= 1;
    }

    return binario;
}

int main() {

    int num;

    printf("Introduce un número: ");
    scanf("%d", &num);

    while(num < 0) {
        printf("Error, intrdoduzca un número válido");
        scanf("%d", &num);
    }

    int resultado = calcula_unos(num);
    printf("\nEL número %d tiene %d número/s '1' en binario", num, resultado);

    return 0;
}
#include <stdio.h>
#include <math.h>

int menu(){
    int seleccion;
    printf("\nMenú: \n");
    printf("Media (1)\n");
    printf("Desviación típica (2)\n");
    printf("Salir(3)\n");
    printf("\nEliga una opción: ");
    scanf("%d", &seleccion);

    while (seleccion < 1 && seleccion > 3) {
        printf("Error, introduzca un valor correcto");
    }
}

int media() {
    
    int num1, num2, num3, num4, num5, resultado;

    printf("Escribe un número: ");
    scanf("%d", &num1);
    
    printf("Escribe otro número: ");
    scanf("%d", &num2);

    printf("Escribe otro número: ");
    scanf("%d", &num3);

    printf("Escribe otro número: ");
    scanf("%d", &num4);

    printf("Escribe otro número: ");
    scanf("%d", &num5);

    resultado = (num1 + num2 + num3 + num4 + num5)/5;

    printf("La media de %d, %d, %d, %d y %d es: %d", num1, num2, num3, num4, num5, resultado);

    return resultado;
}

int desviación() {
    
    int num1, num2, num3, num4, num5, media;
    float resultado;

    printf("\nEscribe un número: ");
    scanf("%d", &num1);
    
    printf("Escribe otro número: ");
    scanf("%d", &num2);

    printf("Escribe otro número: ");
    scanf("%d", &num3);

    printf("Escribe otro número: ");
    scanf("%d", &num4);

    printf("Escribe otro número: ");
    scanf("%d", &num5);

    media = (num1 + num2 + num3 + num4 + num5)/5;

    resultado = sqrt(((num1 - media) * (num1 - media) + (num2 - media) * (num2 - media) + (num3 - media) * (num3 - media) + (num4 - media) * (num4 - media) + (num5 - media) * (num5 - media)) / 5.0);

    printf("La desviación típica de %d, %d, %d, %d y %d es: %f", num1, num2, num3, num4, num5, resultado);

    return resultado;
}

int main() {

    int interfaz = menu();
    printf("\nLa opción elegida es: %d\n\n", interfaz);

    switch (interfaz) {
        case 1:
            media();
        break;
        case 2:
            desviación();
    }

    return 0;
}
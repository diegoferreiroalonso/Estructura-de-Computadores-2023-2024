#include <stdio.h>
#include <math.h>

int menu(){
    int seleccion;
    printf("\nMenú: \n");
    printf("Media (1)\n");
    printf("Desviación típica (2)\n");
    printf("Salir(3)\n");
    printf("Eliga una opción: ");
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

    printf("La media de ")

    return resultado;
}

int main() {

    int resultadomenu = menu();
    printf("\nLa opción elegida es: %d\n", resultado);

    switch (resultado) {
        case 1:
            media();
        break;
        case 3:
            desv
    }

    return 0;
}
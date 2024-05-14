#include <stdio.h>
#include <math.h>

#define pi 3.14159265358979323846

int menu(){
    int seleccion;
    printf("\nMenú: \n");
    printf("Cono (1)\n");
    printf("Ortoedro (2)\n");
    printf("Salir(3)\n");
    printf("\nEliga una opción: ");
    scanf("%d", &seleccion);
    return seleccion;
}

int cono() {
    
    float rad, alt, resultado;

    printf("\nIntroduce el radio del cono: ");
    scanf("%f", &rad);
    printf("\nIntroduce el valor de la altura: ");
    scanf("%f", &alt);

    resultado = (pi * rad * rad * alt)/3;

    printf("\nEl valomen de un cono de radio %f y altura %f es: %f", rad, alt, resultado);
}

int ortoedro() {

    float ari, resultado;

    printf("\nIntroduce el valor de la arista: ");
    scanf("%f", &ari);

    resultado = (ari * ari * ari);
    
    printf("\nEl volumen de un ortaedro de arista %f es: %f", ari, resultado);
}

int main() {

    int interfaz = menu();
    float rad, alt, ari;

    while (interfaz < 1 || interfaz > 3) {
        printf("\nError, introduzca una opción valida");
        menu();
    }

    switch (interfaz) {
        case 1:
            cono();
        break;
        break;
        case 2:
            ortoedro();
        break;
        case 3:
            printf("Saliendo ...");
        break;
        break;
    }
    return 0;
}
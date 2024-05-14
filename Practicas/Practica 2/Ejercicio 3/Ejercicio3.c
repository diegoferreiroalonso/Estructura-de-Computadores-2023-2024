#include <stdio.h>

float Celsius, Fahrenheit;

int main()
{
    printf("Escribe un número en grados Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9/5) +32;

    printf("Los grados Fahrenheit son: ");
    printf("%.2f", Fahrenheit);

    printf("\nFin del algoritmo\n");

    return 0;
}
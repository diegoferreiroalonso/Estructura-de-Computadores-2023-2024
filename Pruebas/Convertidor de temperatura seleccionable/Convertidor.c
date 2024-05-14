#include <stdio.h>
#include <string.h>

float Fahrenheit, Celsius, Rankine, Kelvin, Réaumur, Rømer, Newton, Delisle;
char conversion[20], salir[1];

int main() 
{    
    scanf("%s", salir);
    printf("Saliendo del programa");

    printf("\nBienvenido al conversor de temperatura!");

    printf("\n\nEscriba un número en grados Celsius: ");
    scanf("%f", &Celsius);

    printf("\nLa temperatura elegida en grados Celsius es: ");
    printf("%.2f", Celsius);
    printf(" °C");

    Fahrenheit = Celsius * 9/5 + 32;
    Rankine = Celsius * 9/5 + 491.67;
    Kelvin = Celsius + 273.15;
    Réaumur = Celsius * 4/5;
    Rømer = Celsius * 21/40 + 7.5;
    Newton = Celsius * 33/100;
    Delisle = (100 - Celsius) * 3/2;

    printf("\n\nPuede convertir a grados Fahrenheit, Rankine, Kelvin, Réaumur, Roemer (Rømer), Newton y Delisle");

    printf("\n\nEliga a que grados desea convertir: \n");
    scanf("%s", conversion);

    if (strcmp(conversion, "Fahrenheit") == 0) {
        printf("\nLa temperatura en grados Fahrenheit es: %.2f °F\n", Fahrenheit);
    } else if (strcmp(conversion, "Rankine") == 0) {
        printf("\nLa temperatura en grados Rankine es: %.2f °R\n", Rankine);
    } else if (strcmp(conversion, "Kelvin") == 0) {
        printf("\nLa temperatura en grados Kelvin es: %.2f K\n", Kelvin);
    } else if (strcmp(conversion, "Réaumur") == 0) {
        printf("\nLa temperatura en grados Réaumur es: %.2f °Ré\n", Réaumur);
    } else if (strcmp(conversion, "Roemer (Rømer)") == 0) {
        printf("\nLa temperatura en grados Rømer es: %.2f °Rø\n", Rømer);
    } else if (strcmp(conversion, "Newton") == 0) {
        printf("\nLa temperatura en grados Newton es: %.2f °N\n", Newton);
    } else if (strcmp(conversion, "Delisle") == 0) {
        printf("\nLa temperatura en grados Delisle es: %.2f °De\n", Delisle);
    } else {
        printf("\nGrados no reconocidos\n");
    }

    printf("\nFin del algoritmo\n\n");
    
    return 0;
}
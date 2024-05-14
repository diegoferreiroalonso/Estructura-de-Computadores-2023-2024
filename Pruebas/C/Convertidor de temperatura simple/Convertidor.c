#include <stdio.h>

float Fahrenheit, Celsius, Rankine, Kelvin, Réaumur, Rømer, Newton, Delisle;

int main() 
{
    printf("\nEscriba un número en grados Celsius: ");
    scanf("%f", &Celsius);

    printf("\nLa temperatura elegida en grados Celsius es: ");
    printf("%.4f", Celsius);
    printf(" °C");

    Fahrenheit = Celsius * 9/5 + 32;
    Rankine = Celsius * 9/5 + 491.67;
    Kelvin = Celsius + 273.15;
    Réaumur = Celsius * 4/5;
    Rømer = Celsius * 21/40 + 7.5;
    Newton = Celsius * 33/100;
    Delisle = (100 - Celsius) * 3/2;

    printf("\n\nLa temperatura en grados Fahrenheit es: ");
    printf("%.4f", Fahrenheit);
    printf(" °F");

    printf("\nLa temperatura en grados Rankine (desuso) es: ");
    printf("%.4f", Rankine);
    printf(" R");

    printf("\nLa temperatura en grados Kelvin es: ");
    printf("%.4f", Kelvin);
    printf(" K");

    printf("\nLa temperatura en grados Réaumur (desuso) es: ");
    printf("%.4f", Réaumur);
    printf(" °Ré");

    printf("\nLa temperatura en grados Rømer (desuso) es: ");
    printf("%.4f", Rømer);
    printf(" °Rø");

    printf("\nLa temperatura en grados Newton es: ");
    printf("%.4f", Newton);
    printf(" °N");

    printf("\nLa temperatura en grados Delisle es: ");
    printf("%.4f", Delisle);
    printf(" °D");
    
    printf("\n\nFin del algoritmo\n\n");

    return 0;
}
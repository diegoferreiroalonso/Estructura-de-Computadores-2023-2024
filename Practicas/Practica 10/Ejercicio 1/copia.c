#include <stdio.h>
#include <string.h>

int main() {

    char cadena [100];

    fgets(cadena, 100, stdin);

    int lon = strlen (cadena);

    printf ("\nLa longitud de la cadena es: %d", lon);

    int com = strcmp (cadena, "compara");

    printf ("\n¿Cadenas iguales? %d", com);

    printf ("\nSe ha añadido la palabra: %s", strcat (cadena, "añadida"));

    printf("\nLa cadena en la posición 3 es: %c", cadena [3]);

    return 0;

}
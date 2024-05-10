#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaespacios (char *cadena, char *cadenasin) {

    for (int i = 0; i < cadena; i++) {
        if (cadena[i] = " ") {
            cadena [i] = "";
            cadena [i] == cadenasin [i];
        }
    } 

    return cadenasin;

}

int main() {

    int num;

    printf("Introduce el tamaño de la cadena: ");
    scanf("%d", num);

    char *cadena;

    cadena = (char*)malloc(sizeof(char)*num);

    fgets(cadena, num, stdin);

    iquitaespacios(cadena);

    return 0;

}
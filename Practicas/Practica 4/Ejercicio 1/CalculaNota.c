#include <stdio.h>

void calcula_nota(int nota) {
    
        switch (nota) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("suspenso");
        break;
        case 5:
        case 6:
            printf("Suficiente");
        break;
        case 7:
        case 8:
            printf("Notable");
        case 9:
        case 10:
            printf("Sobresaliente");
        break;
        default:
            printf("Error, introduzca un número entre 0 y 10");
    }
}

int main() {

    int nota;

    printf("Escibe un número: ");
    scanf("%d", &nota);
    calcula_nota(nota);
}
#include <stdio.h>
#include <stdlib.h>

int calculamaxima(int *vec, int ite) {
    
    int max = *vec;

    for (int i = 0; i < ite; i++) {
        if (*(vec + i) > max) {
            max = *(vec + i);
        }
    }

    return max;

}

int main() {

    int ite;

    int *vec;

    printf("\nIndique el número de números que se queiren calcular: ");
    scanf("%d", &ite);

    while (ite < 0) {
        printf("\nError, introduzca un número positivo: ");
        scanf("%d", &ite);
    }

    vec = (int*)malloc(ite * sizeof(int));

    for (int i = 0; i < ite; i++) {
        printf("\nIntrocuzca el %d número: ", i + 1);
        scanf("%d", &vec[i]);
    }

    printf("\n\n\n\x1B[3mPara asegurarnos comprobamos el contenido del vector: \x1B[0m");
    for (int i = 0; i < ite; i++) {
        printf("\n\n\x1B[3m\tEl vector contiene el número %d en la posición %d\x1B[0m", vec[i], i);
    }

    printf("\n\n\n\nEl valor máximo es: %d", calculamaxima(vec, ite));

    printf("\n\nLos números del vector son: ");
    for (int i = 0; i < ite; i++) {
        printf("%d ", vec[i]);
    }

    free(vec);
    
    return 0;

}
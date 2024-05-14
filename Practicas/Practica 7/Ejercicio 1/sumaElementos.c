#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vector(int vec[10]) {

    srand(time(NULL));

    int num_aleatorio;

    for (int i = 0;i < 10; i++) {
        vec[i] = rand() % ((10 - 1 + 1) + 1);
    }
}

int suma(int vec[10]) {

    int res;

    for (int i = 0;i < 10; i++) {
        res = res + vec[i];
    }
    
    return res;

}

int main () {

    int vec[10];

    vector(vec);

    int resultado = suma(vec);

    printf("\nLa suma de los 10 elementos del vector es: %d", resultado);

    printf("\n\nLos elementos del vector son: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vec[i]);
    }

    return 0;

}
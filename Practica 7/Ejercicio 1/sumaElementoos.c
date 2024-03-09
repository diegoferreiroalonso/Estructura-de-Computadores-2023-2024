#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vector(int vec[10]) {

    for (int i = 0; i < 10; i++) {
        vec[i] = rand() % (10 + 1);
    }
}

int suma(int vec[10]) {

    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += vec[i];
    }

    return suma;
}

int main() {

    srand(time(NULL));

    int vec[10];

    vector(vec);

    int resultado = suma(vec);

    printf("\nSuma de todos los elementos del vector: %d", resultado);
    printf("\nElementos del vector: ");
    for (int i = 0; i < 10; i++) {
        printf("%d", vec[i]);
    }

    return 0;
}
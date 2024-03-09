#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vector(int vec[]) {

    int tamaño;
    for (int i = 0; i < tamaño; i++) {
        vec[i] = rand() % (10 + 1);
    }
}

int suma() {

}

int main() {

    srand(time(NULL));

    int vec[10];

    vector(vec);

    int resultado = suma();

    printf("\nSuma de todos los elementos del vector: %d", resultado);
    printf("\nElementos del vector: ");
    for (int i = 0; i < 10; i++) {
        printf("")
    }

    return 0;
}
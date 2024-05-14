#include <stdio.h>

int main() 
{
    int num;
    
    printf("Escibe un número: ");
    scanf("%d", &num);

    if (num == 3){
        printf("Has introducido un 3\n");
    }
    else {
        printf("No has introducido un 3 sino un %d\n", num);
    }

    printf("Fin del algoritmo\n");

    return 0;
} 
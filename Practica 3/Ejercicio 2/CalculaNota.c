#include <stdio.h>

int main()
{
    int num;

    printf("Escribe la nota núimerica: ");
    scanf("%d", &num);

    if ((num == 5) || (num == 6)) {
        printf("Aprobado");
    }
    else {
        if ((num == 9) || (num == 8)) {
            printf("Notable");
        }
        else {
            if ((num == 9) || (num == 10)) {
                printf("Sobresaliente");
            } else {
                if ((num >= 0) && (num < 5)) {
                    printf("Suspenso");
                } else {
                    printf("Error, tiene que estar entre 0 y 10");
                }
            }
        }
    }
    
    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void vocabulario(char vec1[26]) {
    
    for (int i = 0; i < 26; i++) {
        vec1[i] = 'a' + i;
    }
}

int main() {
    
    char vec1[26], vec2[9];
    
    vocabulario(vec1);
    
    srand(time(NULL));
    
    for (int i = 0; i < 8; i++) {
        int random = rand() % (25 + 1);
        vec2[i] = vec1[random];
    }
    
    vec2[9] = '\0';
    
    printf("\nLa contraseña es: ");
    printf("%s", vec2);
    
    return 0;
    
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void introduccion();
int precision();
int menu();
int sumar(int dec);
int restar(int dec);
int multiplicar(int dec);
int dividir(int dec);
void salir();
void desarrollador();
void fernando();

void introduccion() {

    printf("\x1b[34m" "\n\t---------------");
    printf("\n\t| Calculadora |");
    printf("\n\t---------------" "\x1b[0m");

    printf("\x1b[33m" "\n\nTip: Los números decimales se escriben utilizando el punto (.)" "\x1b[0m");

}

int precision() {

    int dec;

    printf("\nIntroduce un número de decimales: ");
    scanf("%d", &dec);

    while(dec < 0) {

        printf("\x1b[31m" "\nError, introduce un número válido de decimales: " "\x1b[0m");
        scanf("%d", &dec);

    }

    return dec;

}

int menu() {

    int opc;

    printf("\n\nOpciones disponibles:");
    printf("\n1 - Sumar");
    printf("\n2 - Restar");
    printf("\n3 - Multiplicar");
    printf("\n4 - Dividir");
    printf("\n5 - Salir\n");
    printf("\nEliga una opción: ");
    scanf("%d", &opc);

    

    while (opc < 1 || opc > 5 ) {

        if (opc == 24) {

            desarrollador();

            break;

        } 

        if (opc == 33) {

            fernando();

            break;

        }

        printf("\x1b[31m" "\nError, introduce un número válido: " "\x1b[0m");
        scanf("%d", &opc);

    }

    switch (opc) {
        case 1: 
            sumar(precision());
            break;
        case 2:
            restar(precision());
            break;
        case 3:
            multiplicar(precision());
            break;
        case 4:
            dividir(precision());
            break;
        case 5:
            salir();
            break;
    }

    return 0;

}

int sumar(int dec) {

    double num1, num2, res;

    printf("\n\nSumar:");

    printf("\n\nIntroduce el primer número: ");
    scanf("%lf", &num1);
    printf("\nIntroduce el segundo número: ");
    scanf("%lf", &num2);

    res = num1 + num2;

    printf("\n\nEl resultado de sumar %.*lf y %.*lf es: %.*lf", dec, num1, dec, num2, dec, res);

    return 0;

}

int restar(int dec) {

    double num1, num2, res;

    printf("\n\nRestar:");

    printf("\n\nIntroduce el primer número: ");
    scanf("%lf", &num1);
    printf("\nIntroduce el segundo número: ");
    scanf("%lf", &num2);

    res = num1 - num2;

    printf("\n\nEl resultado de restar %.*lf y %.*lf es: %.*lf", dec, num1, dec, num2, dec, res);

    return 0;

}

int multiplicar(int dec) {

    double num1, num2, res;

    printf("\n\nMultiplicar:");

    printf("\n\nIntroduce el primer número: ");
    scanf("%lf", &num1);
    printf("\nIntroduce el segundo número: ");
    scanf("%lf", &num2);

    res = num1 * num2;

    printf("\n\nEl resultado de multiplicar %.*lf y %.*lf es: %.*lf", dec, num1, dec, num2, dec, res);

    return 0;

}

int dividir(int dec) {

    double num1, num2, res;

    printf("\n\nDividir:");

    printf("\n\nIntroduce el primer número: ");
    scanf("%lf", &num1);
    printf("\nIntroduce el segundo número: ");
    scanf("%lf", &num2);

    while (num2 == 0) {

        printf("\x1b[31m" "\nError al intentar dividir por cero" "\x1b[0m");
        printf("\n\nVuelva a escibir el segundo número: ");
        scanf("%lf", &num2);

    }

    res = num1 / num2;

    printf("\n\nEl resultado de dividir %.*lf y %.*lf es: %.*lf", dec, num1, dec, num2, dec, res);

    return 0;

}

void salir() {

    printf("\nSaliendo...");

    sleep(0.2);

    exit(0);

}

void desarrollador() {

    time_t tiempo_actual;
    struct tm *info_tiempo;
    char fecha_actual[80];

    time(&tiempo_actual);
    info_tiempo = localtime(&tiempo_actual);

    strftime(fecha_actual, 80, "%d/%m/%Y %H:%M:%S", info_tiempo);

    printf("\nInformación:");
    printf("\nAutor: Diego Ferreiro Alonso");
    printf("\nVersión: 1.2");
    printf("\nÚltima actualización: 14/5/2024");
    printf("\nFecha actual: %s", fecha_actual);

}

void fernando() {

    printf("\033[0;34m"); 
    printf("\nEl Nano es una bala azul que sin cañón");
    printf("\nDispara en un circuito directo al corazón");
    printf("\nEl Nano no es humano, el Nano es inmortal");
    printf("\nY sale en las revistas junto a Hulk y superman");

    printf("\033[0;33m"); 
    printf("\n\nEl Nano es un gigante en un cuerpo de mortal");
    printf("\nY nadie le echa el guante, nadie lo puede alcanzar");

    printf("\033[0;34m"); 
    printf("\n\nEl Nano aae, el Nano aao no quiero a Barrichello");
    printf("\nSchumacher ni al Button porque es el Nano");
    printf("\nQuien llena a todos de ilusión");
    printf("\nCuando se sube en su Renault");
    printf("\n¡Magic Alonso!");

    printf("\033[0;33m"); 
    printf("\n\nEl Nano es buena gente, es un tío enrollao");
    printf("\nY dentro del circuito es el que parte el bacalao");
    printf("\nFernando te queremos por solo una razón");
    printf("\nCoges un día negro y nos lo llenas de emoción");

    printf("\033[0;34m"); 
    printf("\n\nFernando es un gigante en un cuerpo de mortal");
    printf("\nY nadie le echa el guante, nadie lo puede alcanzar");

    printf("\033[0;33m"); 
    printf("\n\nEl Nano aae, el Nano aao no quiero a Barrichello");
    printf("\nSchumacher ni al Button porque es el Nano");
    printf("\nQuien llena a todos de ilusión");
    printf("\nCuando se sube en su Renault");
    printf("\n¡Magic Alonso!");

    printf("\033[0;34m"); 
    printf("\n\nEl nano no nos falla si hay anuncios no te vayas");
    printf("\nPorque él siempre da la talla");
    printf("\nDa igual el puesto que salga no se arruga, no defrauda, no se encoge");
    printf("\nPorque no conoce el miedo");

    printf("\033[0;33m"); 
    printf("\n\nSe cayó de pequeño en una marmita de sidra");
    printf("\nY desde entonces no le frenan ni con pura criptonita");
    printf("\nPorque el Nano es para el pueblo y por el pueblo");
    printf("\nSin dudarlo, el rey del viento");

    printf("\033[0m"); 

}

int main() {

    introduccion();

    menu();
    
    return 0;

}
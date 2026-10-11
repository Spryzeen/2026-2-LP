#include <stdio.h>

int main () {
    int edad = 21;
    float altura = 1.59999;
    char inicial = 'K'; // De Kong ;v

    printf("Hola Mundo!\n");
    printf("------------------------------------\n");
    printf("%-10s %d anios\n", "Edad:", edad);
    printf("%-10s %.2f metros\n", "Altura:", altura);
    printf("%-10s %c\n", "Inicial:", inicial);

    return 0;
}
#include <stdio.h>

int main (void) {
    int a = 5, b = 0;
    // Cualquier valor diferente de 0 es verdadero

    if (a) { printf("True value: %i\n", a); }
    if (!b) { printf("False value: %i\n", b); }

    // El resultado de ua comparación es 0 o 1
    printf("5 < 3: %i\n", 5 < 3);
    printf("5 == 3: %i\n", 5 == 5);

    // Cortocircuito, && y || no evaluan campo innecesarios
    int x = 0;
    if (x != 0 && b > 7 && a < 1) { // x != 0, entonces no se evalua b > 7 ni a < 1
        printf("Nunca se ejecuta este bloque\n");
    }

    int r = 1 || 0 && 0;
    /*                                                
    logicos.c:20:15: warning: suggest parentheses around '&&' within '||' [-Wparentheses]                                       
   20 |     int r = 1 || 0 && 0;                                                                                            
      |               ^~                   
    */
    // El operador 0 se evalua antes que el ||, entonces la expresión será verdadera

    printf("r = 1 || 0 && 0  --->  %i", r);
    
    // 5 < x < 10; evalua 5 < x y luego compara el resultado (z) con 10 ---> z < 10
    // El resultado final vendría a ser 1, sin embargo si cambiaramos 10 por -1; el resultado sería 0

    return 0;
}
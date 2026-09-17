#include <stdio.h>

int main (void) {
    int a = 5, b = 8;

    // Operadores aritméticos
    printf("%i + %i = %i\n", a , b, a+b);
    printf("%i - %i = %i\n", a , b, a-b);
    printf("%i * %i = %i\n", a , b, a*b);
    printf("%i / %i = %i\n", a , b, a/b);
    printf("%i / %i (float) = %f\n\n", a , b, (float) a/b);

    // Modulos
    int c = -7, d = 2;
    printf("%i %% %i = %i\n", c, d, c % d);
    printf("%i %% %i = %i\n\n", -c, -d, -c % -d);

    // Asignación Compuesta
    int x = 5, y = 2;
    printf("int %i += %i -> %i\n", x, y, x+y);
    printf("int %i -= %i -> %i\n", x, y, x-y);
    printf("int %i *= %i -> %i\n", x, y, x*y);
    printf("int %i /= %i -> %i\n", x, y, x/y);

    // No tiene sentido utilizar int x /= (float) y; pues se truncará porque x no es float

    return 0;
}
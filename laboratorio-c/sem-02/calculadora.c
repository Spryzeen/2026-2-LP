#include <stdio.h>

int main () {
    const float PI = 3.14159;

    printf("PI = %f", PI);
    
    int num1 = 0, num2 = 0;
    float resultado;

    printf("----Calculadora Básica----\n");
    printf("Ingrese dos números enteros: \n");

    printf("Primer numero: ");
    scanf("%d", &num1);

    printf("Segundo numero: ");
    scanf("%d", &num2);

    printf("----Resultados----\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d - %d = %d\n", num2, num1, num2 - num1);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    resultado = (float) num1/num2;

    printf("%d / %d = %.2f\n", num1, num2, resultado);
    printf("%d * %d = %d\n", num1, num2, num1 + num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    printf("\n----Operaciones Especiales----\n");
    int x = num1;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);
    printf("Despues de x++: x = %d\n", x);
    printf("++x = %d\n", ++x);

    return 0;
}
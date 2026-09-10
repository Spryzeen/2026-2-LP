#include <stdbool.h>
#include <stdio.h>

#define EULER 2.71828 // No usa = ni ;

int main() {
	int n = 1000;
	float f = 13.1;
	double d = 3.14151617181920;

	char c = 'x';

	_Bool b_1 = 0;
	bool b_2 = false;

	printf("Integer: %i\n",n);
    printf("Float: %f\n", f);
    printf("Double: %f\n",d);
    printf("Char: %i\n", c);
    printf("Boolean 1: %i\n", b_1);
    printf("Boolean 2: %i\n", b_2);
    printf("Preprocesador: %f", EULER);

    // Nota: Char, Booleanos e Integers usan %i
    // Nota: Float y Doubles usan %f

    return 0;
}
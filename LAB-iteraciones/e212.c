#include <stdio.h>
void incrementar(int *x) {
	*x = *x + 1;
	printf("Dentro de incrementar: x = %d\n", *x);
}
int main(void) {
	int n = 10;
	incrementar(n);
	printf("Despues de llamar: n = %d\n", n);  // ¿10 o 11?
	return 0;
}
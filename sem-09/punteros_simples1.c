#include <stdio.h>

int main(void) {
	int numero = 25;
	int* ptr = &numero;

	printf("Valor de numero: %d\n", numero);
	printf("Direccion de numero: %p\n", (void* ) &numero);
	printf("Direccion almacenada en ptr: %p\n", (void* ) ptr);
	printf("Valor apuntado por ptr: %d\n", *ptr);

	*ptr = 50;

	printf("Nuevo valor de numero: %d\n", numero);

	return 0;
}
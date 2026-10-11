#include <stdio.h>

int main(void) {
	int num = -1;

	printf("Ingresa n, [1-10'000]: ");
	scanf("%d", &num);

	int n = 0;

	while (num != 1) {
		if (num % 2 == 0) {
			num /= 2;
		} else {
			num = 3 * num + 1;
		}
		n++;
	}
    
	printf("Mayo semilla en [1,10'000]: n = %d, semilla = %d", num, n);

	return 0;
}
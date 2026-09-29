#include <stdio.h>
int main() {
	int num = 0;
	int A = 0;
	int B = 0;

	printf("Ingresa el numero:\n");
	scanf("%d", &num);

	do {
		printf("Ingresa la cifra A:\n");
		scanf("%d", &A);
	} while (A < 0 || 9 < A);

	do {
		printf("Ingresa la cifra B:\n");
		scanf("%d", &B);
	} while (B < 0 || 9 < B);

	int t = num;
	int pow10 = 1;
	int new_num = 0;

	while (t) {
		int digit = t % 10;

		if (digit == A) {
			new_num += B * pow10;
		} else {
			new_num += digit * pow10;
		}

        pow10 *= 10;
		t /= 10;
	}

	printf("Numero original: %d\n", num);
    printf("Numero modificado: %d\n", new_num);

    return 0;
}
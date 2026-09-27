#include <stdio.h>

int main() {
	int num = 0;
	printf("Ingresa un numero: ");
	scanf("%d", &num);

	int t = num;
	int first = 0;
	int last = -1;
	int pow10 = 1;

	while (t) {
		int digito = t % 10;

		if (last == -1) {
			last = digito;
		}

		first = digito;

		pow10 *= 10;
		t /= 10;
	}

	pow10 /= 10;

	int new_num = num;

	new_num -= (num / pow10) * pow10;
	new_num += last * pow10;
    
	new_num -= num % 10;
	new_num += first;

    printf("Numero original: %d\n", num);
    printf("Numero modificado: %d\n", new_num);
}
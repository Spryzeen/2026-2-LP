#include <stdio.h>

int main() {
	int n = -1;
	printf("Ingresa n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
            printf("%d ", i);
		}

        printf("\n");
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n + 1 - i; j++) {
            printf("%d ", n + 1 - i);
		}
        printf("\n");
	}

	return 0;
}
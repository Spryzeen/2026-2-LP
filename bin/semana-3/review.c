#include <stdbool.h>
#include <stdio.h>

#define NAME_LEN 32

typedef struct {
	float x;
	float y;
	float z;
} point3D;

void print_pos(point3D* p);
void move(point3D* p, float dx, float dy, float dz);

void variables_and_io();
void operators();
void loops_and_selectives();
void pointers_sintax();

int main() {
    // Main mod Control
    pointers_sintax();
    /* 
    variables_and_io();
    operators();
    loops_and_selectives();


	printf("----- ESTRUCTURAS y FUNCIONES -----");

	point3D p = {0.0f, 0.0f, 0.0f};
	print_pos(&p);
	move(&p, 10, 20, 30);
	print_pos(&p);

	printf("----- ARRAY ACCESS -----");
	int arr[10] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
	int* pointer = arr;
	while (pointer != NULL) {
		printf("%i-", *pointer);
		pointer++;
	}

	printf("\n\n");
 */
	return 0;
}

void print_pos(point3D* p) {
	printf("Pos x: %f\n", p->x);
	printf("Pos y: %f\n", p->y);
	printf("Pos z: %f\n\n", p->z);
}

void move(point3D* p, float dx, float dy, float dz) {
	p->x = dx;
	p->y = dy;
	p->z = dz;
}

void variables_and_io() {
	printf("----- VARIABLES AND IO -----");

	int i = 100;
	float f = 1.1;
	double d = 13.232323;
	bool b = 0;

	char c = 'H';
	char s[6] = "Hello";

	printf("%-12s %i \n", "Integer:", i);
	printf("%-12s %f \n", "Float:", f);
	printf("%-12s %f \n", "Double:", d);
	printf("%-12s %c \n", "Char:", c);
	printf("%-12s %s \n", "String:", s);
	printf("%-12s %i \n", "Bool:", b);

	int num = 0;
	printf("-----------------------\nInput a number: ");
	scanf("%i", &num);
	printf("Your number was: %i\n\n", num);

	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);

	char name[NAME_LEN];
	printf("Whats your name?\n");
	fgets(name, sizeof name, stdin);
	printf("Your name is: %s\n", name);

	while ((ch = getchar()) != '\n' && ch != EOF);
}

void operators() {
	printf("----- ARITHMETIC OPERATORS -----");
	// Operadores Aritméticos y Casting
	int x = 5, y = 7;
	printf("%i %c %i = %i\n", x, '+', y, x + y);
	printf("%i %c %i = %i\n", x, '-', y, x + y);
	printf("%i %c %i = %i\n", x, '*', y, x + y);
	printf("%i %c %i (int) = %i\n", x, '/', y, x + y);
	printf("%i %c %i (float) = %f\n", x, '/', y, (float)x + y);
	printf("%i %c %i = %i\n", x, '%', y, x % y);

	// Bitwise control pending
}

void loops_and_selectives() {
	printf("----- BUCLES Y CONDICIONALES -----\n");

    int num;
	printf("Input a number: ");
	scanf("%i", &num);

	if (num % 2 == 0) {
		printf("The number is even\n\n");
	} else if (num % 2 == 1) {
		printf("The number is odd\n\n");
	} else {
		printf("ERROR\n\n");
	}

	for (int index = 100; index > 0; index--) {
		if (index == 1) {
			printf("%i\n\n", index);
		} else {
			printf("%i ", index);
		}
	}

	int age = -1;
	do {
		printf("Input your age: ");
		scanf("%i", &age);
	} while (age < 0 || 200 < age);

    printf("Input a num (1-7)");
    scanf("%i", num);

    switch (num) {
        case 1:
            printf("L");
            break;
        case 2:
            printf("M");
            break;
        case 3:
            printf("X");
            break;
        case 4:
            printf("J");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("S");
            break;
        case 7:
            printf("D");
            break;
        default:
            printf("ERROR");
    }
}

void pointers_sintax() {
    int x = 30;
    int* px = &x;

    printf("%-12s %i\n", "Value:", x);
    printf("%-12s %p\n", "Pointer&X:", &x );
    printf("%-12s %p\n", "PointerPX:", px );

}
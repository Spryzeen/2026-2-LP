#include <stdio.h>

int main () {
    int x;

    printf("Var: %zd\n", sizeof x);
    printf("Integer: %zd\n", sizeof(int));
    printf("Char: %zd\n", sizeof(char));

    return 0;
}
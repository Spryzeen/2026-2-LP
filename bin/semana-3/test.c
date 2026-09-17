#include <stdio.h>

int main () {
    int arr[] = {1,2,3,4,5,6,7,8};
    int arr_size = sizeof arr / sizeof arr[0];

    printf("sizeof: %i", arr_size);
    return 0;
}
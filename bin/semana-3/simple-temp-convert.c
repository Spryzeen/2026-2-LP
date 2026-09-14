#include <stdio.h>

int main () {
    float celsius = 0;
    printf("Ingresa la temperatura: \n");
    scanf("%f", &celsius);

    float farenheit = celsius*(9.0/5.0) + 32;
    float kelvin = celsius + 273.15;

    printf("%-12s %6.3f\n", "Celsius", celsius);
    printf("%-12s %6.3f\n", "Farenheit:", farenheit);
    printf("%-12s %6.3f", "Kelvin:", kelvin);

    return 0;
}
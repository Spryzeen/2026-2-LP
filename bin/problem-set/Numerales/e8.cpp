#include <iostream>

int main () {
    int num = -1;
    int shift = -1;

    std::cout << "Ingresa un valor: ";
    std::cin >> num;

    std::cout << "Ingresa la cantidad de shifts: ";
    std::cin >> shift;

    int pow10 = 1;
    while (pow10 <= num / 10) {
        pow10 *= 10;
    }

    int new_num = num;

    for (int i = 0; i < shift; i++) {
        int cifra = new_num % 10;
        new_num /= 10;
        new_num += cifra * pow10;
    }

    std::cout << "Numero original: " << num << "\n";
    std::cout << "Numero modificado: " << new_num << "\n";

    return 0;
}
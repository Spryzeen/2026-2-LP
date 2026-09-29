#include <iostream>

int main () {
    int num = 0;
    std::cout << "Ingresa el numero: ";
    std::cin >> num;

    int t = num;
    int ultima_cifra = 10;
    int es_estrictamente_creciente = 1;

    while (t && es_estrictamente_creciente) {
        int cifra = t % 10;

        if (ultima_cifra <= cifra) {
            es_estrictamente_creciente = 0;
        }

        ultima_cifra = cifra;
        t /= 10;
    }

    if (es_estrictamente_creciente) {
        std::cout << "El numeral es estrictamente creciente!";
    } else {
        std::cout << "El numeral NO es estrictamente creciente!";
    }

    return 0;
}
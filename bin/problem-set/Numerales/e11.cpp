#include <iostream>

int main () {
    int num = 0;

    std::cout << "Ingresa el numero: "; 
    std::cin >> num;

    int t = num;
    int cifra_maxima = -1;
    int cifra_minima = 10;

    while (t) {
        int cifra = t % 10;

        if (cifra_maxima < cifra) {
            cifra_maxima = cifra;
        }

        if (cifra_minima > cifra) {
            cifra_minima = cifra;
        }

        t /= 10;
    }

    std::cout << "La cifra maxima es: " << cifra_maxima << "\n";
    std::cout << "La cifra minima es: " << cifra_minima;

    return 0;
}
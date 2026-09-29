#include <iostream>

int main () {
    int num = 0;
    std::cout << "Ingresa el numero: ";
    std::cin >> num;

    int t = num;
    int k = 0;

    while (t) {
        k++;
        t/=10;
    }

    t = num;
    int sum = 0;

    while (t) {
        int cifra = t % 10;

        int cifra_potenciada = 1;

        for (int i = 0; i < k; i++) {
            cifra_potenciada *= cifra;
        }

        sum += cifra_potenciada;

        t/=10;
    }

    if (sum == num) {
        std::cout << "Es un numero de Armstrong!";
    } else {
        std::cout << "No es un numero de Armstrong!";
    }

    return 0;
}
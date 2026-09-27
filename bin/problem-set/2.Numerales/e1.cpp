#include <iostream>

int main () {
    int n = 0;
    std::cout << "Ingresa un numero:\n";
    std::cin >> n;

    int t = n;
    int inverso = 0;

    while (t) {
        int digito = t % 10;
        inverso = inverso * 10 + digito;
        t /= 10;
    }

    std::cout << "Numero original: " << n << "\n";
    std::cout << "Numero inverso: " << inverso << "\n";

    std::cout << "\n\nC++";

    return 0;
}
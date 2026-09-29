#include <iostream>

int main () {
    int num = 0;
    std::cout << "Ingresa el numero: \n";
    std::cin >> num;

    int t = num;
    int new_num = 0, pow10 = 1;

    while (t) {
        int digito = t % 10;

        if (digito % 2 != 0) {
            new_num += digito * pow10;
            pow10 *= 10;
        } 

        t /= 10;
    }

    std::cout << "Numero original: " << num << "\n";
    std::cout << "Numero modificado: " << new_num << "\n";
    std::cout << "\nC++";

    return 0;

}
#include <iostream>

int main () {
    int num = 0;
    std::cout << "Ingresa un numero: \n";
    std::cin >> num;

    int t = num;
    int sum_pares = 0, sum_impares = 0;

    while (t) {
        int digito = t % 10;
        
        if (digito % 2 == 0) {
            sum_pares += digito;
        } else {
            sum_impares += digito;
        }

        t/=10;
    }

    std::cout << "Suma pares: " << sum_pares << "\n";
    std::cout << "Suma impares: " << sum_impares << "\n";
    std::cout << "Diferencia: " << sum_pares - sum_impares << "\n";

    std::cout << "\nC++";

    return 0;
}
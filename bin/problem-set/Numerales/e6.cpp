#include <iostream>

int main () {
    int num = 0;
    int A = 0;
    int B = 0;

    std::cout << "Ingresa el numero:\n";
    std::cin >> num;
    
    do {
        std::cout << "Ingresa A:\n";
        std::cin >> A;
    } while (A < 0 || 9 < A);

    do {
        std::cout << "Ingresa B:\n";
        std::cin >> B;
    } while (B < 0 || 9 < B);

    int t = num;
    int new_num = 0;
    int pow10 = 1;
    
    while (t) {
        int digit = t % 10;

        if (digit == A) {
            new_num += B * pow10; 
        } else {
            new_num += digit * pow10;
        }

        pow10 *= 10;
        t /= 10;
    }

    std::cout << "Numero original: " << num << "\n";
    std::cout << "Numero modificado: " << new_num << "\n";

    return 0;
}
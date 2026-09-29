#include <iostream>
int main () {
    int num = 0;
    std::cout << "Ingresa un numero: \n";
    std::cin >> num;

    int t = num;
    int inverse = 0;

    while (t) {
        int digit = t % 10;
        inverse = inverse * 10 + digit;
        t /= 10; 
    }

    std::cout << "El numero original es: " << num << "\n";
    std::cout << "El inverso es: " << inverse << "\n";
    
    if (num == inverse) {
        std::cout << "El numero es capicua!";
    } else {
        std::cout << "El numero no es capicua!";
    }

    return 0;
}
#include <iostream>
int main () {
    int num = 0;
    int arr[9] = {0};

    std::cout << "Ingresa el numero: \n";
    std::cin >> num;

    int t = num;

    while (t) {
        int digit = t % 10;

        arr[digit]++;

        t /= 10;
    }

    int max = -1;
    int max_value = -1;

    for(int i = 0; i < 10; i++) {
        if (max <= arr[i]) {
            max = arr[i];
            max_value = i;
        }
    }

    std::cout << "El numero que mas se repite es: " << max_value << "\n";
    std::cout << "El numero se repite: " << max << " veces";

    return 0;
}
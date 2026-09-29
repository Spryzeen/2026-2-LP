#include <iostream>

int main () {
    int num = 0;
    std::cout << "Dame un numero:\n";
    std::cin >> num;

    int first = -1;
    int last = -1;

    int pow10 = 1;

    int t = num;

    while (t) {
        int digit = t % 10;

        if (last == -1) {
            last = digit;
        }

        first = digit;

        pow10 *= 10;
        t /= 10;
    }

    pow10 /= 10;

    int new_num = num;

    new_num -= first * pow10;
    new_num -= last;

    new_num += last * pow10;
    new_num += first;

    std::cout << "Infor: " << pow10 << "\n";
    std::cout << "Info: " << first << "\n";
    std::cout << "Info: " << last << "\n";
    std::cout << num << "\n";
    std::cout << new_num;

    return 0;
}
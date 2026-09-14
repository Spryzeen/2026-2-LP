#include <stdio.h>

int main () {
    float x = 0.0f;
    float y = 0.0f;
    char operator = '.';

    printf("Input x: ");
    scanf(" %f", &x);

    printf("Input y: ");
    scanf(" %f", &y);

    printf("Input the operator: ");
    scanf(" %c", &operator);

    float result = 0.0f;

    switch (operator) {
        case '+': 
            result = x + y;
            break;
        
        case '-': 
            result = x - y;
            break;
        
        case '*': 
            result = x * y;
            break;
        
        case '/': 
            if (y == 0) {
                printf("ERROR: division with? zero");
                return 1;
            } else {
                result = x / y;
            }
            break;
    }
    
    printf("%.2f %c %.2f = %.2f ", x, operator, y, result);

    return 0;
}
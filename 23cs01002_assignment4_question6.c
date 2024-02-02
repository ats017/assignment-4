#include <stdio.h>

int main() {
    char operator;
    double a, b, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Error! Division by zero.\n");
                return 0;
            }
            result = a / b;
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 0;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}

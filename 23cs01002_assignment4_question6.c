#include <stdio.h>

int main() {
    char operator;
    int a, b, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

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

    printf("Result: %.d\n", result);

    return 0;
}

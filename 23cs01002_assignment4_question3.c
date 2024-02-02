#include <stdio.h>

int main() {
    int credit_score;
    float balance, interest_rate;

    printf("Enter credit score: ");
    scanf("%d", &credit_score);

    printf("Enter current balance: ");
    scanf("%f", &balance);

    switch (credit_score) {
        case 0 ... 599:
            interest_rate = 0.15;
            break;
        case 600 ... 749 :
            interest_rate = 0.12;
            break;
        default:
            interest_rate = 0.10;
    }

    float interest = balance * interest_rate;

    printf("Interest rate: %.2f%%\n", interest_rate * 100);
    printf("Interest on current balance: %.2f\n", interest);

    return 0;
}
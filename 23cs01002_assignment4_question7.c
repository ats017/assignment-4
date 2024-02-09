#include <stdio.h>

int main() {
    int age;
    int ticketPrice;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5) {
        ticketPrice = 0;
    } else if (age >= 5 && age <= 12) {
        ticketPrice = 20;
    } else if (age >= 13 && age <= 59) {
        ticketPrice = 50;
    } else {
        ticketPrice = 50 * 0.8;
    }

    printf("Ticket price: %d\n", ticketPrice);

    return 0;
}

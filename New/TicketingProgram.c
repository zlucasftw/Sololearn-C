#include <stdio.h>

int main() {
    // number of tickets ordered
    int tickets = 73;
    // price per ticket
    float price = 7.45;

    // Task: calculate the total price and store it in a variable
    // Hint: use a float to store the result.
    float totalPrice = price * tickets;

    //Task: output the total in the format "Total: X", where X is the total price.
    printf("Total: %f", totalPrice);

    return 0;
}
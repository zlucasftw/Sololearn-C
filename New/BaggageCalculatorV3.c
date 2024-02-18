#include <stdio.h>

int baggage(int weight) {

    if (weight <= 23) {
        return 0;
    } else {
        return (weight - 23) * 12;
    }

}

int main() {
    int weight, total;
    scanf("%d", &weight);

    total = baggage(weight);
    printf("Total: $%d", total);

    return 0;
}
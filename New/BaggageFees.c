#include <stdio.h>

//define the function here
void baggage() {
    int weight, fee;
    scanf("%d", &weight);
    if (weight > 23) {
        fee = (weight - 23) * 12;
        printf("%d", fee);
    } else {
        printf("%d", 0);
    }
}

int main() {
    baggage();

    return 0;
}
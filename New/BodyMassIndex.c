#include <stdio.h>

int main() {
    //your code goes here

    float bmi;
    scanf("%f", &bmi);

    if (bmi < 18.5) {
        printf("Underweight");
    } else if (bmi > 25) {
        printf("Overweight");
    } else {
        printf("Normal");
    }

    return 0;
}
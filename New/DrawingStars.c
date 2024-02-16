#include <stdio.h>

int main() {
    int stars, i;
    scanf("%d", &stars);

    i = 1;

    while (i <= stars) {
        printf("*");
        i++;
    }

    return 0;
}
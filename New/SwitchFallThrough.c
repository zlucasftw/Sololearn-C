#include <stdio.h>

int main() {
    int position = 2;

    switch (position) {
        case 1:
            printf("Gold");
        case 2:
            printf("Silver");
        case 3:
            printf("Bronze");
        default:
            printf("No medal");
    }

    return 0;
}
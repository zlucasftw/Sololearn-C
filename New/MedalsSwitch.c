#include <stdio.h>

int main() {
    int position = 2;

    switch(position) {
        case 1:
            printf("Gold");
            break;
        case 2:
            printf("Silver");
            break;
        case 3:
            printf("Bronze");
            break;
        default:
            printf("No medal");
    }

    return 0;
}
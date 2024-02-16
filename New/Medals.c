#include <stdio.h>

int main () {
    int position = 2;

    if(position == 1) {
        printf("Gold");
    } else if (position == 2) {
        printf("Silver");
    } else if (position == 3) {
        printf("Bronze");
    }
    else {
        printf("No medal");
    }

    return 0;
}
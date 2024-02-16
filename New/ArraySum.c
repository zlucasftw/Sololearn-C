#include <stdio.h>

int main() {
    int ages[] = {31, 18, 24, 55, 29};

    int total = 0;

    for (int i = 0; i < 5 ; i++){
        total += ages[i];
    }
    printf("Sum: %d", total);

    return 0;
}
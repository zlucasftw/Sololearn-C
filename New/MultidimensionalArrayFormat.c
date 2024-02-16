#include <stdio.h>

int main() {
    int ages[2][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8}
    };
    printf("%d", ages[1][2]);

    return 0;
}
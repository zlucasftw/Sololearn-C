#include <stdio.h>

int main () {
    int items = 100;
    int per_box = 8;
    int left_over = items % per_box;
    printf("%d", left_over);

    return 0;
}
#include <stdio.h>

void swap (int a, int b);

int main (void) {
    int x = 1;
    int y = 2;
    printf("%d %d", x, y);
    swap(x, y);
    printf("\n%d %d", x, y);
}

void swap (int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}
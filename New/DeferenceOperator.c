#include <stdio.h>

int main() {
    int age = 24;
    int* p = &age;

    printf("%d", *p);

    return 0;
}
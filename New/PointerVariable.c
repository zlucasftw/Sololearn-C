#include <stdio.h>

int main() {
    int age = 24;

    int* p = &age;

    printf("%p", p);

    return 0;
}
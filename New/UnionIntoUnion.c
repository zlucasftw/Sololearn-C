#include <stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20];
};

int main() {
    union val u1;
    union val u2;

    u1.int_num = 42;
    u2 = u1;

    printf("%d", u2.int_num);

    return 0;
}
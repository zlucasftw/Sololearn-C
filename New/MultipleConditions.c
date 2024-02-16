#include <stdio.h>

int main() {
    int balance = 200;
    int level = 8;
    char type = 'V';

    if (balance > 1000 || (level > 2 && type == 'V')) {
        printf("Welcome");
    }

    return 0;
}
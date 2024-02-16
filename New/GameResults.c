#include <stdio.h>

int main() {
    float results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};

    int numberOfWins = 0;

    for (int i = 0; i < 28; i++) {
        if (results[i] == 1) {
            numberOfWins += results[i];
        }
    }

    printf("%d", numberOfWins);

    return 0;
}
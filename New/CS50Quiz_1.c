#include <stdio.h>

#define SIZE 5

int main (void) {
    int image[SIZE][SIZE] = {
            {1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0},
            {0, 1, 1, 1, 0},
            {1, 0, 1, 0, 1},
            {1, 1, 0, 1, 1}};

    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {

            if (image[i][j] == 0) {
                printf(":");
                //printf("\n");
            } else {
                printf("     ");
            }

        }
        printf("\n");
    }
}
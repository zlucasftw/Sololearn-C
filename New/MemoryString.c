#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str20[20];
    char *str = NULL;

    strcpy(str20, "12345");

    printf("str20 size: %ld\n", sizeof(str20));
    printf("str20 lenght: %ld\n", strlen(str20));

    str = malloc(strlen(str20) + 1); /* make room for \0 */

    strcpy(str, str20);
    printf("%s", str);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char a[128], b[128];

    printf("input string1:\n");
    fgets(a, 128, stdin);
    printf("input string2:\n");
    fgets(b, 128, stdin);

    int cmp = strcmp(a, b);

    if (cmp == 0) {
        printf("strings are similar\n");
    } else {
        printf("strings are different\n");
    }

    return 0;

}
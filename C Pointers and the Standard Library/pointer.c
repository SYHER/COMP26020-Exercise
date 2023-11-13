#include <stdio.h>
#include <stdlib.h>

int add(int *ptra, int *ptrb) {
    return *ptra + *ptrb;
}

int main(int argc, char **argv) {
    if(argc == 3) {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        int *ptra = &a;
        int *ptrb = &b;

        printf("%d + %d = %d\n", *ptra, *ptrb, add(&a, &b));
    }
    return 0;
}
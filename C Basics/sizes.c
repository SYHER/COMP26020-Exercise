#include <stdio.h>

int main() {
    int so_int = sizeof(int);
    int so_double = sizeof(double);
    int so_ulonglong = sizeof(unsigned long long int);

    printf("%d\n", so_int);
    printf("%d\n", so_double);
    printf("%d\n", so_ulonglong);
    printf("%d\n", so_int * so_double * so_ulonglong);
}
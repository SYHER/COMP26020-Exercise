#include <stdio.h>
#include <stdlib.h>

struct s_rectangle {
    unsigned long long int width;
    unsigned long long int length;
};

typedef struct s_rectangle rectangle;
typedef unsigned long long int ull;


void print_rectangle(rectangle r) {
    printf("Rectangle is %llu x %llu\n", r.width, r.length);
}

int main(int argc, char **argv) {
    struct s_rectangle r;
    ull width;
    ull length;

    if(argc == 3) {
        width = atoll(argv[1]);
        length = atoll(argv[2]);

        r.width = width;
        r.length = length;

        print_rectangle(r);
    }

    return 0;
}
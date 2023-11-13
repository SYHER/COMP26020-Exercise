#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    double a, b, c, r;
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);
    r = a*b*c;
    printf("%f\n", r);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

int main(int argc, char **argv) {
    int n = atoi(argv[1]);

    struct timeval tv, start, stop;

    gettimeofday(&tv, NULL);

    gettimeofday(&start, NULL);
    sleep(n);
    gettimeofday(&stop, NULL);

    printf("sleep duration: %lf seconds\n", (double) (stop.tv_usec - start.tv_usec) / 1000000 + (double) (stop.tv_sec - start.tv_sec));

    return 0;

}
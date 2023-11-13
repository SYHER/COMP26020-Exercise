#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    int size = argc - 1;
    int *array = (int *)malloc(size * sizeof(int));
    int temp = 0;


    for (int i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }

    qsort(array, size, sizeof(int), compare);


    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}

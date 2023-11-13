#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    int **arr = (int **)malloc(x * sizeof(int*));
 
    for (int i = 0; i < x; i++) {
        arr[i] = (int *)malloc(y * sizeof(int));
    }

    int val = 0;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = val;
            printf("%d ", arr[i][j]);
            val ++;
        }
        printf("\n");
    }

    for (int i = 0; i < x; i++) {
        free(arr[i]);
    }
 
    free(arr);

    return 0;

}
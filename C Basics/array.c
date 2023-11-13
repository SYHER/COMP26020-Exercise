#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    int temp = 0;
    int a = argc - 1;
    // printf("%d\n", a);
    int my_array[a];

    for (int i = 1; i <= a; i++){
        my_array[i] = atoi(argv[i]);
        // printf("%d\n", my_array[i]);
    }

    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a; j++) {
		    if (my_array[i] < my_array[j]) {
			    temp = my_array[i];
			    my_array[i] = my_array[j];
			    my_array[j] = temp;
		    }
        }
    }

    for (int i = 1; i <= a; i++){
        printf("%d", my_array[i]);
        printf(" ");
    }
    printf("\n");
}
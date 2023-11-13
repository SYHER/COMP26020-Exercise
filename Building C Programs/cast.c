#include <stdio.h>

typedef enum {
    INT,
    CHAR,
    FLOAT
} array_type;

void array_print(void *ptr, int size, array_type type) {
    /* complete here */
    switch(type) {
        case INT:{
            int *arr = (int *)ptr;
            for (int i = 0; i < size; i++){  
                printf("%d", arr[i]);
            }
            printf("\n");
            break;
        }
        case CHAR:{
            char *arr = (char *)ptr;
            for (int i = 0; i < size; i++){ 
                printf("%c", arr[i]);
            }
            printf("\n");
            break;
        }
        case FLOAT:{
            float *arr = (float *)ptr;
            for (int i = 0; i < size; i++){ 
                printf("%f", arr[i]);
            }
            printf("\n");
            break;
        }
    }
}

int main(int argc, char **argv) {
    int int_tab[3] = {1, 2, 3};
    char char_tab[2] = {'a', 'b'};
    float float_tab[3] = {2.5, 1.1, 12.42};

    array_print(int_tab, 3, INT);
    array_print(char_tab, 2, CHAR);
    array_print(float_tab, 3, FLOAT);

    return 0;
}
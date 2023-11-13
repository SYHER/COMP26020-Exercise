#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *f = argv[1];
    char *w = argv[2];

    FILE *input = fopen(f, "r");

    char output_f[100];
    sprintf(output_f, "%s-processed", f);

    FILE *output = fopen(output_f, "w");
    
    char line[1000];
    while (fgets(line, sizeof(line), input)) {
        char *ptr = strstr(line, w);
        while (ptr) {
            memmove(ptr, ptr + strlen(w), strlen(ptr + strlen(w)) + 1);
            ptr = strstr(ptr, w);
        }
        fprintf(output, "%s", line);
    }

    fclose(input);
    fclose(output);

    return 0;
}

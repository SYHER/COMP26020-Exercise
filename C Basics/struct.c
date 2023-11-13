#include <stdio.h>
#include <stdlib.h>

struct timestamp {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

int add_timestamps(int a, int b, int c) {
    if(c >=60) {
        c = c - 60;
        b++;
        if(b >=60) {
            b = b - 60;
            a++;
        }
    }
    printf("%d %d %d\n", a, b, c);
}

int main(int argc, char *argv[]){
    struct timestamp t1;
    struct timestamp t2;

    t1.hour = atoi(argv[1]);
    t1.minute = atoi(argv[2]);
    t1.second = atoi(argv[3]);
    t2.hour = atoi(argv[4]);
    t2.minute = atoi(argv[5]);
    t2.second = atoi(argv[6]);

    int a = t1.hour + t2.hour;
    int b = t1.minute + t2.minute;
    int c = t1.second + t2.second;


    add_timestamps(a, b, c);
    
}


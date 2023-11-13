#include <stdio.h>

int main(){
    char my_2d_array[9][11];
    my_2d_array[0][0] = ' ';
    my_2d_array[0][1] = ' ';
    my_2d_array[0][2] = ' ';
    my_2d_array[0][3] = '#';
    my_2d_array[0][4] = '#';
    my_2d_array[0][5] = '#';
    my_2d_array[0][6] = '#';
    my_2d_array[0][7] = '#';
    my_2d_array[0][8] = '#';
    my_2d_array[0][9] = ' ';
    my_2d_array[0][10] = ' ';
    my_2d_array[1][0] = ' ';
    my_2d_array[1][1] = '#';
    my_2d_array[1][2] = '#';
    my_2d_array[1][3] = ' ';
    my_2d_array[1][4] = ' ';
    my_2d_array[1][5] = ' ';
    my_2d_array[1][6] = ' ';
    my_2d_array[1][7] = ' ';
    my_2d_array[1][8] = ' ';
    my_2d_array[1][9] = '#';
    my_2d_array[1][10] = '#';
    my_2d_array[2][0] = '#';
    my_2d_array[2][1] = ' ';
    my_2d_array[2][2] = ' ';
    my_2d_array[2][3] = ' ';
    my_2d_array[2][4] = ' ';
    my_2d_array[2][5] = ' ';
    my_2d_array[2][6] = ' ';
    my_2d_array[2][7] = ' ';
    my_2d_array[2][8] = ' ';
    my_2d_array[2][9] = ' ';
    my_2d_array[2][10] = ' ';
    my_2d_array[3][0] = '#';
    my_2d_array[3][1] = ' ';
    my_2d_array[3][2] = ' ';
    my_2d_array[3][3] = ' ';
    my_2d_array[3][4] = ' ';
    my_2d_array[3][5] = ' ';
    my_2d_array[3][6] = ' ';
    my_2d_array[3][7] = ' ';
    my_2d_array[3][8] = ' ';
    my_2d_array[3][9] = ' ';
    my_2d_array[3][10] = ' ';
    my_2d_array[4][0] = '#';
    my_2d_array[4][1] = ' ';
    my_2d_array[4][2] = ' ';
    my_2d_array[4][3] = ' ';
    my_2d_array[4][4] = ' ';
    my_2d_array[4][5] = ' ';
    my_2d_array[4][6] = ' ';
    my_2d_array[4][7] = ' ';
    my_2d_array[4][8] = ' ';
    my_2d_array[4][9] = ' ';
    my_2d_array[4][10] = ' ';
    my_2d_array[5][0] = '#';
    my_2d_array[5][1] = ' ';
    my_2d_array[5][2] = ' ';
    my_2d_array[5][3] = ' ';
    my_2d_array[5][4] = ' ';
    my_2d_array[5][5] = ' ';
    my_2d_array[5][6] = ' ';
    my_2d_array[5][7] = ' ';
    my_2d_array[5][8] = ' ';
    my_2d_array[5][9] = ' ';
    my_2d_array[5][10] = ' ';
    my_2d_array[6][0] = '#';
    my_2d_array[6][1] = ' ';
    my_2d_array[6][2] = ' ';
    my_2d_array[6][3] = ' ';
    my_2d_array[6][4] = ' ';
    my_2d_array[6][5] = ' ';
    my_2d_array[6][6] = ' ';
    my_2d_array[6][7] = ' ';
    my_2d_array[6][8] = ' ';
    my_2d_array[6][9] = ' ';
    my_2d_array[6][10] = ' ';
    my_2d_array[7][0] = ' ';
    my_2d_array[7][1] = '#';
    my_2d_array[7][2] = '#';
    my_2d_array[7][3] = ' ';
    my_2d_array[7][4] = ' ';
    my_2d_array[7][5] = ' ';
    my_2d_array[7][6] = ' ';
    my_2d_array[7][7] = ' ';
    my_2d_array[7][8] = ' ';
    my_2d_array[7][9] = '#';
    my_2d_array[7][10] = '#';
    my_2d_array[8][0] = ' ';
    my_2d_array[8][1] = ' ';
    my_2d_array[8][2] = ' ';
    my_2d_array[8][3] = '#';
    my_2d_array[8][4] = '#';
    my_2d_array[8][5] = '#';
    my_2d_array[8][6] = '#';
    my_2d_array[8][7] = '#';
    my_2d_array[8][8] = '#';
    my_2d_array[8][9] = ' ';
    my_2d_array[8][10] = ' ';
  

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 11; j++) {
            printf("%c", my_2d_array[i][j]);
        }
        printf("\n");
    }
    

}
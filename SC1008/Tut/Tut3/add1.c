#include <stdio.h>
void add1(int ar[], int size);
int main() {
    int array[3][4];
    int h,k; // row, col

    // get rows and cols of matrix
    for (h = 0; h < 3; h++)
        for (k = 0; k < 4; k++)
            scanf("%d", &array[h][k]);

    
    // add 1 to each row
    // for (h = 0; h < 3; h++) /* line a */
    //     add1(array[h], 4);
    add1(array[0],3*4);

    // print matrix
    for (h = 0; h < 3; h++) {
        for (k = 0; k < 4; k++)
            printf("%10d", array[h][k]);
        putchar('\n');
    }
}

void add1(int ar[], int size) {
    int k;
    for (k = 0; k < size; k++) ar[k]++;
}
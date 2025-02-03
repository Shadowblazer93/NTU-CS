# include <stdio.h>
# define SIZE 4

void reduce2D(int ar[][SIZE], int rowSize, int colSize, int res[][SIZE]) {
    for (int x=0; x<rowSize; x++) {
        for (int y=0; y<colSize; y++) res[y][x] = ar[x][y];
    }
}

int main(void) {
    int mtr[SIZE][SIZE] = {
        {1,2,3,4},
        {5,1,2,2},
        {6,3,4,4},
        {7,5,6,7}
    };

    int res[SIZE][SIZE];
    
    reduce2D(mtr,4,4,res);

    for (int x=0; x<SIZE; x++) {
        for (int y=0; y<SIZE; y++) printf("%d ",res[x][y]);
        printf("\n");
    }
}
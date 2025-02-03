# include <stdio.h>
# define SIZE 4

void reduce2D(int ar[][SIZE], int rowSize, int colSize, int res[][SIZE]) {
    int diagonal = 0;
    int sum[SIZE] = {0};

    for (int x=0; x<rowSize; x++) {
        for (int y=0; y<colSize; y++) if (y>=diagonal) sum[x] += ar[y][x];
        diagonal++;
    }

    for (int x=0; x<rowSize; x++) {
        for (int y=0; y<colSize; y++) {
            if (x<y) res[x][y] = ar[x][y];
            else if (x==y) res[x][y] = sum[x];
            else res[x][y] = 0;
        }
    }
}

int main(void) {
    int mtr[SIZE][SIZE] = {
        {4,3,8,6},
        {9,0,6,5},
        {5,1,2,4},
        {9,8,3,7}
    };

    int res[SIZE][SIZE];
    reduce2D(mtr,4,4,res);

    for (int x=0; x<SIZE; x++) {
        for (int y=0; y<SIZE; y++) printf("%d ",res[x][y]);
        printf("\n");
    }
}
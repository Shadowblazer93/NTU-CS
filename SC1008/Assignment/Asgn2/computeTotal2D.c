#include <stdio.h>
#define SIZE 4

void computeTotal2D(int matrix[SIZE][SIZE]);

int main() {
   int a[SIZE][SIZE];
   int i,j;           
   printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
   for (i=0; i<SIZE; i++)
      for (j=0; j<SIZE; j++)
         scanf("%d", &a[i][j]);
   printf("computeTotal2D(): \n");       
   computeTotal2D(a);
   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++)
         printf("%d ", a[i][j]);
      printf("\n");
   }      
}

void computeTotal2D(int matrix[SIZE][SIZE]) {
    for (int x=0;x<SIZE;x++) {
        int rowsum = 0;
        for (int y=0;y<SIZE-1;y++) rowsum+=matrix[x][y];
        matrix[x][3] = rowsum;
    }
}
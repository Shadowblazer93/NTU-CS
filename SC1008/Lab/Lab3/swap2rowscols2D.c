#include <stdio.h>
#define SIZE 3

void swap2Rows(int ar[][SIZE], int r1, int r2);
void swap2Cols(int ar[][SIZE], int c1, int c2);
void display(int ar[][SIZE]);

int main() {
   int array[SIZE][SIZE];
   int row1, row2, col1, col2;    
   int i,j;        
   int choice;
    
   printf("Select one of the following options: \n");
   printf("1: getInput()\n");      
   printf("2: swap2Rows()\n");
   printf("3: swap2Cols()\n");
   printf("4: display()\n");
   printf("5: exit()\n");  
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:  
            printf("Enter the matrix (3x3): \n");
            for (i=0; i<SIZE; i++)
               for (j=0; j<SIZE; j++)
                  scanf("%d", &array[i][j]);  
            break;
         case 2:   
            printf("Enter two rows for swapping: \n");
            scanf("%d %d", &row1, &row2);     
            swap2Rows(array, row1, row2);
            printf("The new array is: \n");       
            display(array);
            break;
         case 3:   
            printf("Enter two columns for swapping: \n");       
            scanf("%d %d", &col1, &col2);
            swap2Cols(array, col1, col2);
            printf("The new array is: \n");       
            display(array);
            break;
         case 4:   
            display(array);
            break;
      }
   } while (choice < 5);  
}

void display(int ar[][SIZE]) {
   int l,m;
   for (l = 0; l < SIZE; l++) {
      for (m = 0; m < SIZE; m++)
         printf("%d ", ar[l][m]);
      printf("\n");
   }
}

void swap2Rows(int ar[][SIZE], int r1, int r2) {
    for (int x=0;x<SIZE;x++) {
        int temp = ar[r1][x];
        ar[r1][x] = ar[r2][x];
        ar[r2][x] = temp;
    }
}

void swap2Cols(int ar[][SIZE], int c1, int c2) {
    for (int y=0;y<SIZE;y++) {
        int temp = ar[y][c1];
        ar[y][c1] = ar[y][c2];
        ar[y][c2] = temp;
    }
}
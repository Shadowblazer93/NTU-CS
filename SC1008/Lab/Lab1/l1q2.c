# include <stdio.h>

int main(void) {
    int lines;
    printf("Enter number of lines :\n");
    scanf("%d",&lines);

    for (int i=0; i<lines; i++) {
        int sum=0,n=0;
        int d;
        printf("Enter line X :\n");

        while (1) {
            scanf("%d",&d);
            if (d==-1) break;
            sum += d;
            n++;
        }
        
        float avg = (float)sum/(float)n;
        printf("Average = %.2f\n",avg);
    }
}
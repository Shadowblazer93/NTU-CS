# include <stdio.h>

int main(void) {
    int lines;
    printf("Enter number of lines: \n");
    scanf("%d",&lines);

    for (int i=1; i<=lines; i++) {
        int sum=0,n=0;
        int d;
        printf("Enter line %d (end with -1): \n",i);

        while (1) {
            scanf("%d",&d);
            if (d==-1) break;
            sum += d;
            n++;
        }
        
        if (n==0) return 0;
        float avg = (float)sum/(float)n;
        printf("Average = %.2f\n",avg);
    }
}
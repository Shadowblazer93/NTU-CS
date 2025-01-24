# include <stdio.h>
# include <math.h>

int main(void) {
    float x;
    float sum=0;
    int ftl = 1;

    printf("Enter x :\n");
    scanf("%f",&x);

    for (int i=0; i<=10; i++) {
        if (i>1) ftl *= i;
        sum += pow(x,i)/ftl;
    }

    printf("e^x : %.2f\n",sum);
    return 0;
}
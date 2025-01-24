# include <stdio.h>

int main(void) {
    int a1, b1, c1, a2, b2, c2;
    printf("Enter values for a1, b1, c1, a2, b2, c2 :\n");
    scanf("%d %d %d %d %d %d", &a1,&b1,&c1,&a2,&b2,&c2);

    int denom = a1*b2-a2*b1;
    if (denom==0) {printf("Denominator is zero");}
    else {
        float x = (b2*c1-b1*c2)/denom;
        float y = (a1*c2-a2*c1)/denom;
        printf("x : %.2f\ny : %.2f\n",x,y);
    }
    return 0;
}
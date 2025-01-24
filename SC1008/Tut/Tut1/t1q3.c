# include <stdio.h>

int main(void) {
    int h,k;
    printf("Enter height :\n");
    scanf("%d",&h);

    for (int i=0; i<=h; i++) {
        for (int j=0; j<i; j++) {
            k = (i%3==0 ? 3 : i%3);
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}
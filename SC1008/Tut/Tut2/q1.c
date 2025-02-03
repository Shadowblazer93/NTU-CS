# include <stdio.h>

int main(void) {
    int number;
    int p;

    p=100;number=8;
    printf("%d %d %d %d %d",number,&number,p,&p,*p);
}
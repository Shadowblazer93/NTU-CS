#include <stdio.h>

int main(void) {
    double x, res = 0;
    unsigned long long ftl = 1;
    int neg = 1;
    printf("Enter a number:\n");
    scanf("%f",&x);

    for(int i=1;i<=20;i++) {
        ftl *= i;
        neg = neg<0 ? 1 : -1;

        double k = 1.0;
        for (int j=0; j<i; j++) k *= x;
        k /= neg*ftl;
        res += k;
    }

    printf("%d",res);
}
# include <stdio.h>

int main(void) {
    double x,res=1;
    printf("Enter a number:\n");
    scanf("%lf",&x);

    double num=1,den=1;

    for (int i=1; i<=20; i++) {
        num *= x;
        den *= i;
        double term = num/den;
        res += i%2 ? -1*term : term;
    }

    printf("Result = %.2f\n",res);
}
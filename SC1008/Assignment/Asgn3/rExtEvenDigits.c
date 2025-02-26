#include <stdio.h>

void rExtEvenDigits(int num, int *evenPtr);

int main() {
    int number, result=0;
    printf("Enter a number: \n");
    scanf("%d", &number);
    rExtEvenDigits(number, &result);
    printf("rExtEveneDigits(): %d\n", result);
}

void rExtEvenDigits(int num, int *evenPtr) {
    static int degree; if (degree==0) degree=1,*evenPtr=0;
    int even_exists = 0;
    if (num<=0) return;

    if ((num%10)%2==0) {
        if (even_exists==0) even_exists=1;
        *evenPtr += (num%10)*degree;
        degree*=10;
    }
    
    if (*evenPtr==0&&even_exists==0) *evenPtr=-1;
    rExtEvenDigits(num/10,evenPtr);
}
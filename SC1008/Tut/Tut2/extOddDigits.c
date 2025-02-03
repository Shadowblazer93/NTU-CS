#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main() { 
    int number, result = INIT_VALUE;
    
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n", extOddDigits1(number)); 
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d\n", result);
    return 0;
} 
int extOddDigits1(int num) {
    int i,degree=1,odd=0;
    while (num>0) {
        i = num%10;
        if (i%2==1) {
            odd = i*degree + odd;
            degree *= 10;
        }
        num/=10;
    }
    return odd ? odd : -1;
} 
void extOddDigits2(int num, int *result) {
    int i,degree=1;
    *result = 0;
    while (num>0) {
        i = num%10;
        if (i%2==1) {
            *result = *result + i*degree;
            degree *= 10;
        }
        num/=10;
    }
    if (*result==0) *result = -1;
}
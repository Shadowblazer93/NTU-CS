#include <stdio.h>

int rDigitPos1(int num, int digit);
void rDigitPos2(int num, int digit, int *pos);

int main() {
    int number, digit, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit); 
    printf("rDigitPos1(): %d\n", rDigitPos1(number, digit)); 
    rDigitPos2(number, digit, &result); 
    printf("rDigitPos2(): %d\n", result); 
}

int rDigitPos1(int num, int digit) {
    if (num==0) return 0;
    if (num%10==digit) return 1;

    int k = rDigitPos1(num/10,digit);
    if (k==0) return 0;
    else return k+1;
}

void rDigitPos2(int num, int digit, int *pos) {
    if (num==0) {*pos=0;return;}
    if (num%10==digit) {*pos=1;return;}
    
    rDigitPos2(num/10,digit,pos);
    if (*pos!=0) *pos+=1;
}
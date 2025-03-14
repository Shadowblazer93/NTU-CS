#include <stdio.h> 

int rDigitValue1(int num, int k); 
void rDigitValue2(int num, int k, int *result); 

int main() {
    int k; 
    int number, digit; 

    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    printf("Enter k position: \n"); 
    scanf("%d", &k); 
    printf("rDigitValue1(): %d\n", rDigitValue1(number, k)); 
    rDigitValue2(number, k, &digit); 
    printf("rDigitValue2(): %d\n", digit); 
}

int rDigitValue1(int num, int k) {
    if (k==1) return num%10;
    return rDigitValue1(num/10,k-1);
}

void rDigitValue2(int num, int k, int *result) {
    if (k==1) {
        *result = num%10;
        return;
    }
    return rDigitValue2(num/10,k-1,result);
}
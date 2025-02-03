#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
int main() { 
    int num, digit, result=-1; 
    
    printf("Enter the number: \n");
    scanf("%d", &num); 
    printf("Enter k position: \n");
    scanf("%d", &digit); 
    printf("digitValue1(): %d\n", digitValue1(num, digit));
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result); 
    return 0;
} 

int digitValue1(int num, int k) {
    int i,pos=1;
    while (num>0) {
        i = num%10;
        printf("%d",i);
        if (i==k) return pos;
        pos++;
        num/=10;
    }
    return 0;
} 
void digitValue2(int num, int k, int *result) { 
    int i,pos=1;
    *result = 0;
    while (num>0) {
        i = num%10;
        if (i==k) {
            *result = pos;
            break;
        }
        pos++;
        num/=10;
    }
}
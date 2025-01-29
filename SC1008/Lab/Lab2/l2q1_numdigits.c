#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
   int number, result=0;
    
   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("numDigits1(): %d\n", numDigits1(number));    
   numDigits2(number, &result);
   printf("numDigits2(): %d\n", result);            
   return 0;
}
int numDigits1(int num)
{
   int r=0;
   while (num>0) {
    r++;
    num /= 10;
   }
   return r;
}
void numDigits2(int num, int *result)
{
   *result = 0;
   while (num>0) {
    *result = *result + 1;
    num /= 10;
   }
}
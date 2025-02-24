#include <stdio.h> 
#define SIZE 20

int rCountArray(int array[], int n, int a); 

int main() { 
    int array[SIZE]; 
    int index, count, target, size; 
    
    printf("Enter array size: \n"); 
    scanf("%d", &size); 
    printf("Enter %d numbers: \n", size); 
    for (index = 0; index < size; index++) scanf("%d", &array[index]); 
    printf("Enter the target number: \n"); 
    scanf("%d", &target); 
    count = rCountArray(array, size, target); 
    printf("rCountArray(): %d\n", count); 
}

int rCountArray(int array[], int n, int a) {
    if (n<=0) return 0;
    return (array[n-1]==a)+rCountArray(array,n-1,a);
}
# include <stdio.h>
# include <stdlib.h>

int main(void) {
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    
    int nums[n];
    int freq[10] = {};

    for (int i=0; i<n;i++) {
        nums[i] = rand()%100;
        freq[nums[i]/10]++;
    }

    int l=0,r=9;
    for (int i=0; i<10; i++) {
        printf("%d-%d | ",l,r);
        int k = freq[i];
        for (int j=0; j<k; j++) printf("*");
        printf("\n");
        l+=10;r+=10;
    }
}
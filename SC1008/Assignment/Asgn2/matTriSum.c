#include <stdio.h> 
#define M 10 
int matTriSum(int x[M][M], int n); 
int main()
{ 
    int x[M][M]; 
    int n,i,j,s; 
    
    printf("Enter array (nxn) size (n<=10): \n"); 
    scanf("%d",&n); 
    for (i=0;i<n;i++) { 
        printf("Enter row %d: \n",i); 
        for (j=0;j<n;j++) scanf("%d",&x[i][j]); 
    } 
    s=matTriSum(x,n); 
    printf("The sum is: %d\n",s); 
}

int matTriSum(int x[M][M], int n) {
    int res=0;

    for (int a=0;a<n;a++) {
        for (int b=a;b<n;b++) if (a<=b) res+=x[a][b];
    }

    return res;
}
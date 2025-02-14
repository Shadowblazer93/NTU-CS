#include <stdio.h>
int platform1D(int ar[], int size);
int main()  
{
    int i,b[50],size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++) scanf("%d",&b[i]);
    printf("platform1D(): %d\n", platform1D(b,size));
}

int platform1D(int ar[], int size) {
    if (size==0) return 0;
    int res=1,platform=1;

    for (int i=1;i<size;i++) {
        if (ar[i]==ar[i-1]) platform++;
        else {
            if (platform>res) res=platform;
            platform=1;
        }
    }

    if (platform>res) res = platform;
    return res;
}
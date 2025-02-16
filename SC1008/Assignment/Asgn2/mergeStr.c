#include <stdio.h>
#include <string.h>

void mergeStr(char *a, char *b, char *c);

int main() {
    char a[80],b[80]; 
    char c[80]; 
    printf("Enter the first string a: \n"); 
    scanf("%s",a); 
    printf("Enter the second string b: \n"); 
    scanf("%s",b); 
    mergeStr(a,b,c); 
    printf("mergeStr(): %s", c); 
}

void mergeStr(char *a, char *b, char *c) {
    while (*a&&*b) {
        if (*a<*b) {
            *c = *a;
            a++;
            }
        else {
            *c = *b;
            b++;
            }
        c++;
    }

    while (*a) *c=*a,a++,c++;
    while (*b) *c=*b,b++,c++;
    *c='\0';
} 

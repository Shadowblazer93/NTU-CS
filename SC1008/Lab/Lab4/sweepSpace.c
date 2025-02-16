#include <stdio.h> 
#include <string.h>

char *sweepSpace(char *str); 

int main() { 
    char str[80], *p; 
    printf("Enter the string: \n"); 
    fgets(str, 80, stdin); 
    if (p=strchr(str,'\n')) *p = '\0'; 
    printf("sweepSpace(): %s\n", sweepSpace(str)); 
}

char *sweepSpace(char *str) {
    static char res[80];
    int ind=0;

    for (int i=0; str[i]!='\0';i++) {
        if (str[i]!=' ') {
            res[ind] = str[i];
            ind++;
        }
    }
    res[ind] = '\0';
    return res;
}
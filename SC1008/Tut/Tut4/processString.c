#include <stdio.h>
#include <string.h>

void processString(char *str, int *totVowels, int *totDigits);

int main() { 
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 50, stdin);
    if (p=strchr(str,'\n')) *p = '\0'; 
    processString(str, &totVowels, &totDigits); 
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}

void processString(char *str, int *totVowels, int *totDigits) {
    for (int i=0; i<strlen(str); i++) {
        char vowels[] = "aeiouAEIOU";
        char digits[] = "0123456789";

        if (strchr(vowels,str[i]) != NULL) *totVowels+=1;
        if (strchr(digits,str[i]) != NULL) *totDigits+=1;
    }
}
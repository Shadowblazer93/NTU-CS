# include <stdio.h>
# include <ctype.h>

int main(void) {
    char c;
    int digits=0, chars=0;
    printf("Enter your characters (# to end) : \n");

    while (c = getchar() != '#') {
        if (isdigit(c)) {digits++;}
        else if (isalpha(c)) {chars++;}
    }

    printf("Digits : %d, Chars : %d\n",digits,chars);
    return 0;

}
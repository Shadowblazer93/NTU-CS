# include <stdio.h>

int main(void) {
    int id,mark;
    char grade;

    while (1) {
        printf("Enter Student ID: \n");
        scanf("%d",&id);
        if (id==-1) break;
        printf("Enter Mark: \n");
        scanf("%d",&mark);
        if (mark==-1) break;

        if (mark>=75 && mark<=100) grade='A';
        if (mark>=65 && mark<=74) grade='B';
        if (mark>=55 && mark<=64) grade='C';
        if (mark>=45 && mark<=54) grade='D';
        if (mark<=44) grade='F';

        printf("Grade = %c\n",grade);
    }
}
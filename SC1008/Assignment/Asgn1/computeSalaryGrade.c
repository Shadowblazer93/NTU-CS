# include <stdio.h>

int main(void) {
    int salary,merit;
    char grade;
    printf("Enter the salary:\n");
    scanf("%d",&salary);
    printf("Enter the merit:\n");
    scanf("%d",&merit);

    if (salary>=700 && salary<=899) {
        if (salary<=799) grade = merit<20 ? 'B' : 'A';
    } else if (salary>=600 && salary<=799) {
        if (salary<=649) grade = merit<10 ? 'C' : 'B';
    } else if (salary>=500 && salary<=649) grade = 'C';

    printf("The grade: %c\n",grade);
}
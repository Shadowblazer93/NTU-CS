#include <stdio.h> 
#include <string.h> 

struct student{ 
 char name[20]; /* student name */ 
 double testScore; /* test score */ 
 double examScore; /* exam score */ 
 double total; /* total = (testScore+examScore)/2 */ 
}; 

double average(); 
int main() { 
    printf("average(): %.2f\n", average()); 
}

double average() {
    struct student stds[50];
    int ind=0;

    while (1) {
        char name[100];
        double ts,es;
        printf("Enter student name:\n");
        scanf("%s",name);
        if (!strcmp(name,"END")) break;
        printf("Enter test score:\n");
        scanf("%lf",&ts);
        printf("Enter exam score:\n");
        scanf("%lf",&es);

        struct student student;
        strcpy(student.name,name);
        student.testScore = ts;
        student.examScore = es;
        student.total = (ts+es)/2;
        stds[ind]=student;
        ind++;
        printf("%s total = %.2lf\n",student.name,student.total);
    }

    double sum = 0;
    double n = ind;

    for (int i=0;i<ind;i++) {
        sum+=stds[i].total;
    }

    return sum/n;
}
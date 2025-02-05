# include <stdio.h>

int main(void) {
    while (1) {
        int year;
        char *hor;
        printf("Enter your birth year:\n");
        scanf("%d",&year);
        if (year==-1) break;

        char *horoscopes[12] = {"Monkey","Rooster","Dog","Pig","Rat","Cow","Tiger","Rabbit","Dragon","Snake","Horse","Goat"};
        hor = horoscopes[year%12];
        printf("chineseHoroscope: %s\n",hor);
    }
}
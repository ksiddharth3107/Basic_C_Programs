#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    //a leap year if divisible by 400
    if (year % 400==0){
        printf("It is a leap year\n");
    }
    //not a leap year if not divisible by 400 but divisible by 100
    else if (year % 100==0){
        printf("It is not a leap year\n");
    }
    //a leap year if not divsible by 100 but divisble by
    else if (year %4==0){
        printf("It is a leap year\n");
    }
    //all remaining are not leap years
    else{
        printf("It is not a leap year\n");
    }
    return 0;
}
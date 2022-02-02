#include<stdio.h>

int leap_year(int year){
    if(year%400==0){
        printf("It is a leap year\n");
        }
        else if(year%100==0){
            printf("It is not a leap year\n");
        }
        else if(year%4==0){
            printf("It is a leap year\n");;
        }
        else{
            printf("It is not a leap year\n");
        }
}
int main()
{int year;
printf("Enter a year\n");
scanf("%d",&year);
leap_year(year);
    return 0;
}
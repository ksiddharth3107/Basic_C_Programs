#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    if (number < 0){
        printf("It is a negative number\n");
    }
    else if(number > 0){
        printf("It is a positive number\n");
    }
    else{
        printf("It is neither positive nor negative\n");
    }
    return 0;
}
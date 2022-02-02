#include<stdio.h>

int main()
{
    int n,sum=0,remainder;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        sum+=remainder;
        n=n/10;
    }
    printf("The sum of digits of the number is %d\n",sum);
    return 0;
}
#include<stdio.h>

int main()
{
    int temp,num1,num2;
    printf("Enter num1\n");
    scanf("%d",&num1);
    printf("Enter num2\n");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("The swapped value of num1 = %d\n",num1);
    printf("The swapped value of num2 = %d\n",num2);
    return 0;
}
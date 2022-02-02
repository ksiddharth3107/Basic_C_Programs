#include<stdio.h>

int sumdigits(int n){
     int sum=0;
    while(n>0){
      
       sum+=(n%10);
       n=n/10;

    }
    return sum;
}
int main()
{
    int number;
   printf("Enter a number\n");
   scanf("%d",&number);
   printf("The sum of the digits is: %d\n",sumdigits(number)); 
    return 0;
}
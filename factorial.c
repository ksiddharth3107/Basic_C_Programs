#include<stdio.h>

int main()
{
    int i,fact=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("The value of factorial of %d is %d\n",n,fact);
   
    return 0;
}
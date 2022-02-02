#include<stdio.h>

int main()
{
    int i,num,check;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            check=1;
            break;
        }
    }
    if(check==1){
        printf("The number is not prime\n");
    }
    if(check==0){
        printf("The number is prime\n");
    }
    if(num==0 ||num==1){
        printf("The number is neither prime nor composite\n");
    }
    return 0;
}
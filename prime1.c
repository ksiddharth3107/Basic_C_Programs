#include<stdio.h>

int main()
{
    int i,num,check=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
             printf("The number is not prime\n");

            check=1;
            break;
        }
    }
    
    if(check==0){
        printf("The number is prime\n");
    }
   

    return 0;
}
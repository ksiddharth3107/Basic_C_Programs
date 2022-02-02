#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if(isalpha(ch)){
        printf("It is an alphabet\n");
    }
    else{
        printf("It is not an alphabet\n");
    }
    return 0;
}
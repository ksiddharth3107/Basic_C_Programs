#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a letter\n");
    scanf("%c", &ch);
    switch (ch){
        case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U':
         printf("VOWEL");
         break;
         default:
         printf("CONSONENT");
    }
    return 0;
}
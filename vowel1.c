#include<stdio.h>
#include<ctype.h>

int main()
{
    char c;
    int lower_vowel,upper_vowel;
    printf("Enter a letter\n");
    scanf("%c",&c);
    lower_vowel=(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u');
    upper_vowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if(!isalpha(c)) {
        printf("Invalid letter\n");
    }
    else if(lower_vowel || upper_vowel) {
        printf("It is a vowel\n");}
    else {
        printf("It is a consonant\n");}
    return 0;
}
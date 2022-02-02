#include<stdio.h>
int main()
{
    int i,j,k,t=1;
    for (i='A'; i<='E'; i++)
    {
      for(k=5; k>t;k--)
      {printf(" "); t++;}
        for (j='A'; j<=i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    //The quatratic eqaution is ax^2+bx+c
    int a,b,c;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Enter value of c\n");
    scanf("%d",&c);
    if((b*b-4*a*c)==0){
        printf("The rootsOfQuadratic are %f and %f\n",-b/(2.0*a),-b/(2.0*a));
    }
    else if((b*b-4*a*c)>0){
        printf("The rootsOfQuadratic are %f and %f\n",(-b+sqrt(b*b-4*a*c))/(2.0*a),(-b-sqrt(b*b-4*a*c))/(2.0*a));
    }
    else{
       float realpart=(-b)/(2.0*a);
       float imagpart=(sqrt(-(b*b-4*a*c)))/(2.0*a);

        printf("The rootsOfQuadratic are %.2f+i%.2f and %.2f-i%.2f\n",realpart,imagpart,realpart,imagpart);
    }
    return 0;
}
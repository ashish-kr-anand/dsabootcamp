// Write a program to check whether roots of a given quadratic equation are real 
// & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    if((b*b-4*a*c)>0)
     printf("roots is real & distinct");
    else if((b*b-4*a*c)==0)
          printf("roots is real & equal");
        else
          printf("roots is imaginary roots");
          return 0;

}
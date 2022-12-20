// Write a program to check whether a given year is a leap year or not

#include<stdio.h>
int main()
{
    int x;
    printf("Enter year: ");
    scanf("%d",&x);
    if(x%100==0)
    {
      if(x%400==0)
       printf("year is a leap year");
      else
       printf("year is not a leap year");
    }
    else if(x%4==0)
           printf("year is a leap year");
         else
           printf("year is not a leap year");  
}
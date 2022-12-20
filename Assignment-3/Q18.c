 // Write a program which takes the month number as an input and display 
 // number of days in that month

#include<stdio.h>
int main()
{ 
    int x;
    printf("Enter month number: ");
    scanf("%d",&x);
    if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
     printf("Number of days is 31");
    else if(x==2)
     printf("Number of days is 28 or 29 ");
    else
     printf("Number of days is 30");
     return 0;
}

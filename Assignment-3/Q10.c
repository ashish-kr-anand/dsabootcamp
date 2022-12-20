// Write a program which takes the cost price and selling price of a product 
// from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    float cp,sp,x;
    printf("Enter C.P and S.P of a product:");
    scanf("%f%f",&cp,&sp);
    x=(sp-cp)/cp*100;
    if(x>0)
    printf("profit =%0.3f",x);
    else
    printf("loss = %0.2f",x);
    return 0;

}
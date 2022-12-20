// Assume price of 1 USD is INR 76.23. Write a program to take 
// the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    float r,x;
    printf("Enter amount in INR :");
    scanf("%f",&r);
    x=r/76.23;
    printf("price of %f INR in USD=%0.2f",r,x);
    return 0;


}
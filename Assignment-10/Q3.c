// Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int number(int);
int main()
{
    int x,y;
    printf("Enter num: ");
    scanf("%d",&x);
    y=number(x);
    if(y==1)
      printf("num is even");
    else
      printf("num is odd");

}

int number(int x)
{
    if(x%2==0)
     return 1;
    else
     return 0;
}
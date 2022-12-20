// . Write a program which takes the length of the sides of a triangle as an input. 
//Display whether the triangle is valid or not. 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter length of three side of traingle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
     printf("triangle is valid");
    else
     printf("triangle is not valid");
     return 0;
}
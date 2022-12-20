// Write a program to print size of an int, a float, a char and
// a double type variable

#include<stdio.h>
int main()
{
    int x,y;
    y=sizeof(int);
    printf("size of int=%d\n",y);
    y=sizeof(float);
    printf("size of float=%d\n",y);
    y=sizeof(char);
    printf("size of char=%d\n",y);
    y=sizeof(double);
    printf("size of double=%d",y);
    return 0;
}
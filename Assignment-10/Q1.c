// Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
  int r;
  printf("Enter radius: ");
  scanf("%d",&r);
  area(r);
  printf("Area of circle=%0.2f",area(r));
}
 
float area(int r)
{
    float z;
    z=3.14*r*r;
    return(z);
}
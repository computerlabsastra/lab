#include<stdio.h>
void main()
{
int x,y;
printf(" enter the value of x and y");
scanf("%d%d",&x,&y);
if(x>0)
{
if(y>0)
printf("x and y points lying in first quadrant");
else
printf("x nd y point lying in fourth quadrant");
}
else if (y>0)
printf("x and y points are lying in second quadrant");
else
printf(" x and y are points lying in third quadrant");
}

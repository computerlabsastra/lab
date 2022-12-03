#include <stdio.h>

void main()
{
int a,b;
scanf("%d%d",&a,&b);
a =a+b;
b=a-b;
a=a-b;
printf("swapped numbers are %d %d",a,b);
}

#include<stdio.h>
void main()
{
int n, binary,i,r;
printf("enter the value of n");
scanf("%d",&n);
binary=0;
i=0;
while(n!=0)
{
r=n%2;
n=n/2;
binary=binary+(r*i);
}
printf("%d",r);
}

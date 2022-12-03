#include <stdio.h>
void main()
{ 
int n,rem=0,prod=1;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
prod=prod*rem;
n=n/10;
}
printf("product %d",prod);
}

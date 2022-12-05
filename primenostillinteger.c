//finding prime numbers till the given no.
#include <stdio.h> <math.h>
void factors(int n)
{
    int flag = 1;
    for (int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%d, ", n);
}
void main()
{
    int c;
    printf("Give the number:");
    scanf("%d",&c);
    for (int d=2;d<=c;d++)
    {
        factors(d);
    }
}
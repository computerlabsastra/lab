#include <stdio.h>
size(int x,int y)
{
    for (int f=0;f<=x;f++)
    {
        printf("[%d]",y);
    }
}
main()
{
    int a,b,z;
    printf("How many dimensions do you want?");
    scanf("%d",&a);
    printf("Size of one dimension?");
    scanf("%d",&b);
    z=size(a,b);
    printf("%d",z);
}
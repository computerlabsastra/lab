//prime numbers between 0 and integer
#include <stdio.h>
main()
{
    int a,b[1000],d=0,c,e;
    printf("Give the no. till u want prime number :");
    scanf("%d",&a);
    if (a>=4)
        for (c=2;c<a;c++)
        {
            if (a%c==0)
                b[d]=c;
                d++;
        }
        printf("Hence , the prime numbers are :\n");
        for (e=0;e<d;e++)
        {
            printf("%d\n",b[e]);
        }
}

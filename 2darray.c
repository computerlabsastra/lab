#include <stdio.h> <iostream>
main()
{
    int d2[10][10];
    for (int a=0;a<10;a++)
    {
        for (int b=0;b<10;b++)
        {
            cin >> d2[a][b];
            printf("d2[%d][%d]\n",a,b);
        }
    }
}
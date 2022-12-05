//resolution of a force into two axes
#include <stdio.h> <math.h>
main()
{
    int f,theta;
    float x,y;
    printf("Give force value:");
    scanf("%d",f);
    printf("Give angle value:");
    scanf("%d",theta);
    x=f*cos(theta);
    y=f*sin(theta);
    printf("Hence , the x and y axes values are %f and %f respectively.",x,y);
}
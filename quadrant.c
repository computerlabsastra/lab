#include<stdio.h>

void main() {
	float x, y;
	printf("Enter X co-ordinates: ");
	scanf("%f", &x);
	printf("Enter Y co-ordinates: ");
	scanf("%f", &y);

	if (x > 0 && y > 0)
		printf("Point is in 1st quadrant.\n");

	else if (x < 0 && y > 0)
		printf("Point is in 2nd quadrant.\n");

	else if (x < 0 && y < 0)
		printf("Point is in 3rd quadrant.\n");

	else
		printf("Point is in 4th quadrant.\n");
}

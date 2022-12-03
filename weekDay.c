#include <stdio.h>

void main() {
	int day;
	printf("Enter week day: ");
	scanf("%d", &day);
	
	switch (day) {
		case 1:
			printf("Sunday");
			printf("\nWeek- First day");
			break;
		case 2:
			printf("Monday");
			printf("\nWeek- Second day");
			break;
		case 3:
			printf("Tuesday");
			printf("\nWeek- Third day");
			break;
		case 4:
			printf("Wednesday");
			printf("\nWeek- Fourth day");
			break;
		case 5:
			printf("Thursday");
			printf("\nWeek- Fifth day");
			break;
		case 6:
			printf("Friday");
			printf("\nWeek- Sixth day");
			break;
		case 7:
			printf("Saturday");
			printf("\nWeek- Seventh day");
			break;
	}
}

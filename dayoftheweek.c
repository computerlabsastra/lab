#include <stdio.h>

void main(){
int day;
scanf("%d",&day);

switch(day){
case 1:
printf("sunday \n");
printf("week - first day");
break;
case 2:
printf("monday \n");
printf("week - second day");
break;
case 3:
printf("tuesday \n");
printf("week - third day");
break;
case 4:
printf("wednesday \n");
printf("week - fourth day");
break;
case 5:
printf("thursday \n");
printf("week - fifth day");
break;
case 6:
printf("fridy \n");
printf("week - sixth day");
break;
case 7:
printf("saturday \n");
printf("week - seventh day");
break;
default:
printf("invalid input");
break;
}
}




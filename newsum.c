#include<stdio.h>
void main()
{
	printf("enter no of hours and minutes");
	int hours, minutes, tminutes;
	scanf("%d%d",&hours, &minutes);
	tminutes=hours*60+minutes;
	printf("total minutes are %d minutes", tminutes);
}

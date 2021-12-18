#include<stdio.h>
void main ()
{
	float principle, roi, time, simpleintrest;
	printf("ennter principle \n, rate of intrest \n, time");
	scanf("%f%f%f", &principle, &roi, &time);
	simpleintrest=principle*time*roi/100;
	printf("simple intrest when the given prciple is %f \n rate of intrest is %f \n time is %f is %f", principle, roi, time, simpleintrest);
	
}

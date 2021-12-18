#include<stdio.h>
void main()
{
float area, perimeter, radius;

printf("enter the radius of the circle");
scanf("%f" , &radius);
area=3.14*radius*radius;
perimeter=2*3.14*radius;
printf("area of the circle with given radius %.2f is %f\n",radius, area );
printf("perimeter of the circle with given radius %.2f is %f", radius, perimeter);
}

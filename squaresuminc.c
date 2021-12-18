#include<stdio.h>
void main()
{int side , area , perimeter;
printf("enter the side of a square");
scanf("%d", &side);
area=side*side;
perimeter=4*side;
printf("Area of a square with given side %d is %d\n", side, area);
printf("perimeter of a given square with given side %d is %d", side , perimeter);
}

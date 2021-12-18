#include<stdio.h>
void main()
{
	int length, breadth, area, perimeter;
	scanf("%d%d",&length, &breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("area of thr rectangle with given length %d and breadth %d is %d\n", length, breadth, area);
	printf("perimeter of the rectangle with given length %d and breadth %d is %d", length, breadth, perimeter); 
}

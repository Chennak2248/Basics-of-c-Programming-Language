#include<stdio.h>
void main()
{
int num1 , num2 , sum , difference, quotient , remainder , product;
printf("enter the numbers");
scanf("%d%d", &num1,&num2);
sum= num1+num2;
printf("sum of %d and % d is %d\n", num1, num2, sum);
difference=num1-num2;
printf("difference of %d and %d is %d\n",num1, num2, difference);
quotient=num1/num2;
printf("quotient of %d and %d is %d\n", num1, num2, quotient);
product=num1*num2;
printf("product of %d and %d is %d\n", num1 , num2, product);
remainder=num1%num2;
printf("remainder of %d and %d is %d", num1 , num2, remainder);
}

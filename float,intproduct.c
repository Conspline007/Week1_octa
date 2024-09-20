#include <stdio.h>

int main()
{
	float num1,num2;
	printf("Enter two floating point numbers ");
	scanf("%f%f",&num1,&num2);
	printf("The product of given two numbers as floating point numbers is %f\n", num1*num2);
	printf("The integral part of the product of given two numbers is %d",(int)(num1*num2));
	return 0;
}

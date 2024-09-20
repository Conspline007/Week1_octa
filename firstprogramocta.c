//first c program in octa;
#include<stdio.h>

int main()
{
	int num1,num2;
	printf("Enter two integers ");
	scanf("%d%d", &num1,&num2);
	printf("the addition of two numbers is %d\nThe subtraction of two numbers is %d\nThe product of two numbers is %d\nThe ratio of two numbers is %f",num1 + num2, num1-num2, num1*num2, num1/num2);
	return 0;
}



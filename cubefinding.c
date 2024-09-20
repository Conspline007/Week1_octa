#include <stdio.h>
#include <math.h>

int main()
{
	float x;
	printf("Enter a number to find its cube ");
	scanf("%f",&x);
	printf("The cube of given number is %f",pow(x,3));
	return 0;
}

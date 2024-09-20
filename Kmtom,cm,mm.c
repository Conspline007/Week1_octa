#include <stdio.h>

int main()
{
	float km;
	printf("Enter the length to be converted ");
	scanf("%f",&km);
	printf("The value of given length in meters is %f\nThe value of given length in centimeter is %f\nThe value of given number in millimeter is %f", km*1000, km*100000, km*1000000);
	return 0;
}

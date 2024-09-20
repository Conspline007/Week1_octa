#include <stdio.h>

int main()
{
	float u,a,t;
	printf("Enter the value of initial velocity in m/s ");
	scanf("%f",&u);
	printf("Enter the value of acceleration in m/s^2 ");
	scanf("%f",&a);
	printf("Enter the value of time in s ");
	scanf("%f",&t);
	printf("The value of final velocity is %f", u + a*t);
	return 0;
}

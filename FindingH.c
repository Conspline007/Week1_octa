#include <stdio.h>
#include <math.h>
int main()
{
	float b,p;
	printf("Enter the value of p ");
	scanf("%f",&p);
	printf("Enter the value of b ");
	scanf("%f",&b);
	printf("The value of H is %f",sqrt(pow(b,2)+pow(p,2)));
	return 0;
}



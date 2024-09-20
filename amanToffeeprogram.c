#include <stdio.h>
#include <math.h>

int main()
{
	float x,r;
	printf("Enter the amount of Horlicks Aman had in grams ");
	scanf("%f",&x);
	printf("Enter the radius of the circle ");
	scanf("%f",&r);
	printf("The amount of toffees earned by Aman = %d",(int)((100*x)/(2*M_PI*r)));
	return 0;
}

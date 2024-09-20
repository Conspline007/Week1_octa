#include <stdio.h>
#include <math.h>

int main()
{
	float p,n,r;
	printf("Enter principal amount ");
	scanf("%f",&p);
	printf("Enter number of years ");
	scanf("%f",&n);
	printf("Enter rate of interest ");
	scanf("%f",&r);
	printf("The simple interest is %f",(p*n*r)/100);
	printf("The compound interest is %f", p*pow((1+r/n),n));
	
	return 0;
}

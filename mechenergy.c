#include <stdio.h>
#include <math.h>

int main()
{
	float m,h,v;
	printf("Enter the mass ");
	scanf("%f",&m);
	printf("Enter the velocity ");
	scanf("%f",&v);
	printf("Enter the height ");
	scanf("%f",&h);
	printf("The mechanical energy of given number is %f",(m*9.81*h)+0.5*m*v*v);
	return 0;
}

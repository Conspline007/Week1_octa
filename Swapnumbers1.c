#include <stdio.h>
// swapping of numbers program
int main()
{
	int a,b;
	printf("enter two integers ");
	scanf("%d%d",&a,&b);
	int t=a;
	a=b;
	b=t;
	printf("the final values of swapping are %d, %d ",a,b); 
	return 0;
} 

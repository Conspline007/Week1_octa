#include <stdio.h>

int main()
{
	int a,b;
	printf("enter two integers ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the final values of swapping are %d, %d ",a,b); 
	return 0;
}

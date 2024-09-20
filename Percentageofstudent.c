#include <stdio.h>

int main()
{
	int s1,s2,s3,s4,s5;
	printf("Enter the marks of student in all 5 subjects ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	printf("The marks scored by student is %d %%",(s1+s2+s3+s4+s5)/5 );
	return 0;
}

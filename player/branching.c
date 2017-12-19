#include <stdio.h>

int main(void)
{
	int a=9,b=0,i,c=0;
	for(i=0;i<4;i++)
	{
		b=b+a*pow(10,i);
		c=c+b;
	
	}
	printf("%d",c);
	return 0;
}

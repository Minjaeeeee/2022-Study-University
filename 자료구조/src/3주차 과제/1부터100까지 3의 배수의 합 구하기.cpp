#include <stdio.h>

int main(void)
{
	int i,j;
	int sum=0;
	
	for(i=1; i<=100; i++)
	{
		if(i%3==0)
		{
			sum+=i;	
		}	
	}
	
	printf("%d",sum);
}

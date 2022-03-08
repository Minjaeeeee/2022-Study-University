#include <stdio.h>


int main(void)
{
	int num;
	int sum=0; //1부터 100까지 더할 함수!
		
	scanf("%d",&num);
	for(int i=1; i<=num; i++)
	{
		sum+=i;	
	}	
	
	printf("%d\n",sum);
	return 0;
} 




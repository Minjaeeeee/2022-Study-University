#include <stdio.h>


int main(void)
{
	int num;
	int sum=0; //1���� 100���� ���� �Լ�!
		
	scanf("%d",&num);
	for(int i=1; i<=num; i++)
	{
		sum+=i;	
	}	
	
	printf("%d\n",sum);
	return 0;
} 




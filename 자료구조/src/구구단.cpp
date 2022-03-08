#include <stdio.h>

//int main(void)
//{
//	int a,b; //두 정수입니다. 
//	int i,j; //횟수
//	
//	for(int i=1; i<=9; i++) //반복문 실행! 
//	{
//		for(int j=1; j<=9; j++)
//		{
//			printf("%d * %d = %d\n",i,j,i*j);
//		}	
//	} 	
//} 



int main(void)
{
	int a,b;
	int i=3,j; //횟수 현재 이문제는 3단을 출력하는 겁니다! 
	
	for(int i=1; i<=9; i++)
	{
		for(int j=1; j<=9; j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
		
} 

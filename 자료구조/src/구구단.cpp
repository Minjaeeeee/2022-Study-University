#include <stdio.h>

//int main(void)
//{
//	int a,b; //�� �����Դϴ�. 
//	int i,j; //Ƚ��
//	
//	for(int i=1; i<=9; i++) //�ݺ��� ����! 
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
	int i=3,j; //Ƚ�� ���� �̹����� 3���� ����ϴ� �̴ϴ�! 
	
	for(int i=1; i<=9; i++)
	{
		for(int j=1; j<=9; j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
		
} 

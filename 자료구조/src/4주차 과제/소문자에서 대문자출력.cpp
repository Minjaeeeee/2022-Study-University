#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
//�ڽ��� �����̸� �빮�� -> �ҹ��� 
//int main(void)
//{
//	char arr[SIZE];
//	char name;
//	int count=1;
//	
//	printf("�̸��� �Է����ּ���!: ");
//	scanf("%s",&arr); //�̸��� �Է¹��� 
//	
//	while(arr[count]!='\0') //���� ��������! 
//	{
//		count++;
//	}
//	
//	for(int i=0; i<=count; i++)
//	{ 
//		arr[i] = (int)arr[i]-32;
//		printf("%c",(char)arr[i]);
//	}
//	return 0;
//}




////�ҹ��ڿ��� -> �빮��  
//int main(void)
//{
//	char arr[SIZE];
//	char name;
//	int count=1;
//	
//	printf("�̸��� �Է����ּ���!: ");
//	scanf("%s",&arr); //�̸��� �Է¹��� 
//	
//	while(arr[count]!='\0') //���� ��������! 
//	{
//		count++;
//	}
//	
//	for(int i=0; i<=count; i++)
//	{ 
//		arr[i] = (int)arr[i]+32;
//		printf("%c",(char)arr[i]);
//	}
//	return 0;
//}








////�ܾ �Է��ؼ� �ҹ��ڿ��� -> �빮��  
//int main(void)
//{
//	char arr[SIZE];
//	char name;
//	int count=1;
//	
//	printf("�̸��� �Է����ּ���!: ");
//	scanf("%s",&arr); //�̸��� �Է¹��� 
//	
//	while(arr[count]!='\0') //���� ��������! 
//	{
//		count++;
//	}
//	
//	for(int i=0; i<=count; i++)
//	{ 
//		if(arr[i]>='A' && arr[i]<= 'Z')
//		{
//			printf("%c",(char)arr[i]);
//			continue;
//		}
//		
//		else if(arr[i]>='a' && arr[i]<='z')
//		{
//			arr[i] = (int)arr[i]-32;
//			printf("%c",(char)arr[i]);
//		}
//	}
//	return 0;
//}




//�ܾ �Է��ؼ� �빮�ڿ��� -> �ҹ���  
int main(void)
{
	char arr[SIZE];
	char name;
	int count=1;
	
	printf("�̸��� �Է����ּ���!: ");
	scanf("%s",&arr); //�̸��� �Է¹��� 
	
	while(arr[count]!='\0') //���� ��������! 
	{
		count++;
	}
	
	for(int i=0; i<=count; i++)
	{ 
		
		if(arr[i]>='a' && arr[i]<='z')
		{
			printf("%c",(char)arr[i]);
			continue;
		}
		
		else if(arr[i]>='A' && arr[i]<= 'Z')
		{
			arr[i] = (int)arr[i]+32;
			printf("%c",(char)arr[i]);
		}
		
	}
	return 0;
}





















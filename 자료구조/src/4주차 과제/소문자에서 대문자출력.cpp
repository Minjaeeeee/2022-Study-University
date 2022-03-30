#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
//자신의 영어이름 대문자 -> 소문자 
//int main(void)
//{
//	char arr[SIZE];
//	char name;
//	int count=1;
//	
//	printf("이름을 입력해주세요!: ");
//	scanf("%s",&arr); //이름을 입력받음 
//	
//	while(arr[count]!='\0') //글자 갯수세기! 
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




////소문자에서 -> 대문자  
//int main(void)
//{
//	char arr[SIZE];
//	char name;
//	int count=1;
//	
//	printf("이름을 입력해주세요!: ");
//	scanf("%s",&arr); //이름을 입력받음 
//	
//	while(arr[count]!='\0') //글자 갯수세기! 
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








////단어를 입력해서 소문자에서 -> 대문자  
//int main(void)
//{
//	char arr[SIZE];
//	char name;
//	int count=1;
//	
//	printf("이름을 입력해주세요!: ");
//	scanf("%s",&arr); //이름을 입력받음 
//	
//	while(arr[count]!='\0') //글자 갯수세기! 
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




//단어를 입력해서 대문자에서 -> 소문자  
int main(void)
{
	char arr[SIZE];
	char name;
	int count=1;
	
	printf("이름을 입력해주세요!: ");
	scanf("%s",&arr); //이름을 입력받음 
	
	while(arr[count]!='\0') //글자 갯수세기! 
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





















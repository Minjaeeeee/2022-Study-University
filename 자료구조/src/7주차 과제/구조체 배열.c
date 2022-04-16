#include <stdio.h>
#include <math.h>


typedef struct Friends
{
	char name[10];
	char address[10];
	char phoneNum[12];
	char age[3];	
}Friends;


int main(void)
{
	Friends arr[5];
	
	for(int i=0; i<2; i++)
	{
		printf("이름을 입력해주세요: ");
		scanf("%s",&arr[i].name);
		printf("주소를 입력해주세요: "); 
		scanf("%s",&arr[i].address);
		printf("연락처를 적어주세요: "); 
		scanf("%s",&arr[i].phoneNum);
		printf("나이를 입력해주세요: "); 
		scanf("%s",&arr[i].age);	
		printf("\n");
	}
	
	for(int i=0; i<2; i++)
	{
		printf("========================================================\n");
		printf("\n");
		printf("이름:%s 주소:%s 연락처:%s 나이:%s\n",arr[i].name, arr[i].address, arr[i].phoneNum, arr[i].age);
		printf("\n");
		printf("========================================================\n");
		printf("\n");
	}
}

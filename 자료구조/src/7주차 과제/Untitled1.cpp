#include <stdio.h>
/*
int main(void)
{
	float ave[3];
	float *AP = ave; //배열값이 들어감  
	int sum[3];
	int *SP = sum; //합계값이 들어감
	int kor=0,eng=0,math=0;
	
	for(int i=0; i<3; i++)
	{
		printf("국어 영어 수학 점수를 입력해주세요!: ");
		scanf("%d%d%d",&kor,&eng,&math);
		sum[i] = kor+eng+math;
		ave[i] = ((float)kor+(float)eng+(float)math)/3;
		
		printf("\n");
	} 
	
	for(int i=0; i<3; i++)
	{
		printf("평균: %f 합계:%d \n",AP[i],SP[i]);
	}
	

	
}
*/



typedef struct Friends
{
	char name[10];
	char address[10];
	char phoneNum[10];
	char age[10];	
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


















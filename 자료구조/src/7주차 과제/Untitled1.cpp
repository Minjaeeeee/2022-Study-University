#include <stdio.h>
/*
int main(void)
{
	float ave[3];
	float *AP = ave; //�迭���� ��  
	int sum[3];
	int *SP = sum; //�հ谪�� ��
	int kor=0,eng=0,math=0;
	
	for(int i=0; i<3; i++)
	{
		printf("���� ���� ���� ������ �Է����ּ���!: ");
		scanf("%d%d%d",&kor,&eng,&math);
		sum[i] = kor+eng+math;
		ave[i] = ((float)kor+(float)eng+(float)math)/3;
		
		printf("\n");
	} 
	
	for(int i=0; i<3; i++)
	{
		printf("���: %f �հ�:%d \n",AP[i],SP[i]);
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
		printf("�̸��� �Է����ּ���: ");
		scanf("%s",&arr[i].name);
		printf("�ּҸ� �Է����ּ���: "); 
		scanf("%s",&arr[i].address);
		printf("����ó�� �����ּ���: "); 
		scanf("%s",&arr[i].phoneNum);
		printf("���̸� �Է����ּ���: "); 
		scanf("%s",&arr[i].age);	
		printf("\n");
	}
	
	for(int i=0; i<2; i++)
	{
		printf("========================================================\n");
		printf("\n");
		printf("�̸�:%s �ּ�:%s ����ó:%s ����:%s\n",arr[i].name, arr[i].address, arr[i].phoneNum, arr[i].age);
		printf("\n");
		printf("========================================================\n");
		printf("\n");
	}
}


















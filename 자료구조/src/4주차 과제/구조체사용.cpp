#include <stdio.h>
#include <String.h>
#include <math.h>
//struct Student
//{
//	char name[10];
//	int num;
//	char majer[10];
//};
//
//
//int main(void)
//{
//	struct Student kim;
//	strcpy(kim.name,"�����");
//	kim.num=1971014;
//	strcpy(kim.majer,"IT�����к�");
//	
//	printf("�̸�: %s\n�й�: %d\n����:%s\n",kim.name,kim.num,kim.majer); 
//}


//������ �Է�  
struct Student
{
	char name[10];
	int num;
	char majer[10];
};


int main(void)
{
	
	struct Student arr[10];
	int n=0;
	printf("Ƚ���� �Է����ּ���:");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		printf("�̸��� �й� �а��� �����ּ���!: ");
		scanf("%s %d %s",&arr[i].name,&arr[i].num, &arr[i].majer);
	}
	
	printf("=============================================\n");
	for(int i=0; i<3; i++)
	{
		printf("�̸�:%s �й�:%d �а�:%s\n",arr[i].name, arr[i].num, arr[i].majer);	
	} 
	printf("=============================================\n");
}



















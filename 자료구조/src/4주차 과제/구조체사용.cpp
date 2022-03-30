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
//	strcpy(kim.name,"김민재");
//	kim.num=1971014;
//	strcpy(kim.majer,"IT융합학부");
//	
//	printf("이름: %s\n학번: %d\n전공:%s\n",kim.name,kim.num,kim.majer); 
//}


//여러명 입력  
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
	printf("횟수를 입력해주세요:");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		printf("이름과 학번 학과를 적어주세요!: ");
		scanf("%s %d %s",&arr[i].name,&arr[i].num, &arr[i].majer);
	}
	
	printf("=============================================\n");
	for(int i=0; i<3; i++)
	{
		printf("이름:%s 학번:%d 학과:%s\n",arr[i].name, arr[i].num, arr[i].majer);	
	} 
	printf("=============================================\n");
}



















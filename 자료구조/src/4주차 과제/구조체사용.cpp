#include <stdio.h>
#include <String.h>
#include <math.h>
struct Student
{
	char name[10];
	int num;
	char majer[10];
};


int main(void)
{
	struct Student kim;
	strcpy(kim.name,"�����");
	kim.num=1971014;
	strcpy(kim.majer,"IT�����к�");
	
	printf("�̸�: %s\n�й�: %d\n����:%s\n",kim.name,kim.num,kim.majer); 
}

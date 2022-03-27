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
	strcpy(kim.name,"±è¹ÎÀç");
	kim.num=1971014;
	strcpy(kim.majer,"ITÀ¶ÇÕÇĞºÎ");
	
	printf("ÀÌ¸§: %s\nÇĞ¹ø: %d\nÀü°ø:%s\n",kim.name,kim.num,kim.majer); 
}

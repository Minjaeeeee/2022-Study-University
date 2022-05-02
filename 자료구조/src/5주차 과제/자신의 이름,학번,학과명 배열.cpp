#include <stdio.h>

int main(void)
{
	char major[10],num[10],name[10];
	int i,n=0;
	
	printf("횟수를 입력해주세요!: ");
	scanf("%d",&n); 
	
	for(i=0; i<n; i++)
	{
		printf("이름 학번 학과명을 입력해주세요: ");
		scanf("%s%s%s",&name[i],&num[i],&major[i]);
		printf("이름:%s 학번:%s 학과:%s \n",name[i],num[i],major[i]);
		printf("\n");
	}
	
	return 0;
}
 

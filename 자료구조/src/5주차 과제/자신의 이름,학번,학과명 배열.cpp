#include <stdio.h>

int main(void)
{
	char major[10],num[10],name[10];
	int i,n=0;
	
	printf("Ƚ���� �Է����ּ���!: ");
	scanf("%d",&n); 
	
	for(i=0; i<n; i++)
	{
		printf("�̸� �й� �а����� �Է����ּ���: ");
		scanf("%s%s%s",&name[i],&num[i],&major[i]);
		printf("�̸�:%s �й�:%s �а�:%s \n",name[i],num[i],major[i]);
		printf("\n");
	}
	
	return 0;
}

#include <stdio.h>
//(3)case���� �̿��Ͽ� �������(��, 90���̻� 'A') 

int main(void)
{
	int score[10];
	int n;
	printf("������ �Է��� Ƚ��:");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		printf("������ �Է����ּ���!: ");
		scanf("%d",&score[i]);
		printf("=============\n");
		
		switch((score[i]/10)*10)
		{
			case 90: printf("������: A\n"); break;
			case 80: printf("������: B\n"); break;
			case 70: printf("������: C\n"); break;
			case 60: printf("������: D\n"); break;
			default: printf("������: F\n"); break;
		} 
		printf("=============\n");
	}
	
	return 0; 
}

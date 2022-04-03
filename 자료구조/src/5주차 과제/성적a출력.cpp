#include <stdio.h>
//(3)case문을 이용하여 학점출력(예, 90점이상 'A') 

int main(void)
{
	int score[10];
	int n;
	printf("성적을 입력할 횟수:");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		printf("성적을 입력해주세요!: ");
		scanf("%d",&score[i]);
		printf("=============\n");
		
		switch((score[i]/10)*10)
		{
			case 90: printf("성적은: A\n"); break;
			case 80: printf("성적은: B\n"); break;
			case 70: printf("성적은: C\n"); break;
			case 60: printf("성적은: D\n"); break;
			default: printf("성적은: F\n"); break;
		} 
		printf("=============\n");
	}
	
	return 0; 
}

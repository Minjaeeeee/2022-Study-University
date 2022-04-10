#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{	
	int losecount=0; //진 상황  
	int wincount=0; //이긴 상황 
	int drawcount=0; 
	int user[100];
	int com[100];
	int count=0;
	int s=0,b=0,m=0;
	
	printf("가위바위보 입력해라!");
	printf("가위는 0번 바위는 1번 보는 2번\n");
	srand((int)time(NULL)); 
	printf("횟수를 입력해주세여!: ");
	scanf("%d",&count);
	
	//유저 입력 받습니다! 
	for(int i=0; i<count; i++)
	{
		scanf("%d",&user[i]); //가위,바위,보를 입력받음  
	}
	
	
	//컴퓨터랑 유저랑 비교합니다. 
	for(int i=0; i<count; i++)
	{
		com[i] = rand()%3; //0,1,2
		
		if(com[i]==0 && user[i]==0)
		{
			printf("무승부\n");	
			drawcount++;
		}	
		else if(com[i]==0 && user[i]==1)
		{
			printf("이겼습니다\n");
			wincount++;
			m++;
		}
		else if(com[i]==0 && user[i]==2)
		{
			printf("졌습니다\n");
			losecount++;
		}
		
		else if(com[i]==1 && user[i]==0)
		{
			printf("졌습니다\n");
			losecount++;
		}
		
		else if(com[i]==1&& user[i]==1)
		{
			printf("비겼습니다\n");
			drawcount++;
		}
		
		else if (com[i]==1 && user[i]==2)
		{
			printf("이겼습니다\n");
			wincount++;
			b++;
		}
		
		else if(com[i]==2 && user[i]==0)
		{
			printf("이겼습니다\n");
			wincount++;
			s++;
		}
		
		else if(com[i]==2 && user[i]==1)
		{
			printf("졌습니다\n");
			losecount++;
		}
		
		else if(com[i]==2 && user[i]==2) 
		{
			printf("비겼습니다\n");
			drawcount++;
		}
		
		else printf("error");
	} 
	
	printf("===================================\n");
	printf("이긴 횟수:%d 진 횟수:%d 비긴횟수:%d \n",wincount,losecount,drawcount);
	printf("가위로 이긴 확률: %f\n",((float)s/(float)count)*100);
	printf("보로 이긴 확률:%f\n",((float)b/(float)count)*100);
	printf("바위로 이긴 확률:%f\n",((float)m/(float)count)*100);
	printf("===================================\n");
}

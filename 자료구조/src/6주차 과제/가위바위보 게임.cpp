#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{	
	int losecount=0; //�� ��Ȳ  
	int wincount=0; //�̱� ��Ȳ 
	int drawcount=0; 
	int user[100];
	int com[100];
	int count=0;
	int s=0,b=0,m=0;
	
	printf("���������� �Է��ض�!");
	printf("������ 0�� ������ 1�� ���� 2��\n");
	srand((int)time(NULL)); 
	printf("Ƚ���� �Է����ּ���!: ");
	scanf("%d",&count);
	
	//���� �Է� �޽��ϴ�! 
	for(int i=0; i<count; i++)
	{
		scanf("%d",&user[i]); //����,����,���� �Է¹���  
	}
	
	
	//��ǻ�Ͷ� ������ ���մϴ�. 
	for(int i=0; i<count; i++)
	{
		com[i] = rand()%3; //0,1,2
		
		if(com[i]==0 && user[i]==0)
		{
			printf("���º�\n");	
			drawcount++;
		}	
		else if(com[i]==0 && user[i]==1)
		{
			printf("�̰���ϴ�\n");
			wincount++;
			m++;
		}
		else if(com[i]==0 && user[i]==2)
		{
			printf("�����ϴ�\n");
			losecount++;
		}
		
		else if(com[i]==1 && user[i]==0)
		{
			printf("�����ϴ�\n");
			losecount++;
		}
		
		else if(com[i]==1&& user[i]==1)
		{
			printf("�����ϴ�\n");
			drawcount++;
		}
		
		else if (com[i]==1 && user[i]==2)
		{
			printf("�̰���ϴ�\n");
			wincount++;
			b++;
		}
		
		else if(com[i]==2 && user[i]==0)
		{
			printf("�̰���ϴ�\n");
			wincount++;
			s++;
		}
		
		else if(com[i]==2 && user[i]==1)
		{
			printf("�����ϴ�\n");
			losecount++;
		}
		
		else if(com[i]==2 && user[i]==2) 
		{
			printf("�����ϴ�\n");
			drawcount++;
		}
		
		else printf("error");
	} 
	
	printf("===================================\n");
	printf("�̱� Ƚ��:%d �� Ƚ��:%d ���Ƚ��:%d \n",wincount,losecount,drawcount);
	printf("������ �̱� Ȯ��: %f\n",((float)s/(float)count)*100);
	printf("���� �̱� Ȯ��:%f\n",((float)b/(float)count)*100);
	printf("������ �̱� Ȯ��:%f\n",((float)m/(float)count)*100);
	printf("===================================\n");
}

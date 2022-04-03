#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int arr[7]= {0,};
	int i,j;
	int n;
	
	srand(time(NULL));
	printf("횟수를 입력해주세요!: ");
	scanf("%d",&n); 
	
	for(i=0; i<n; i++)
	{
		int result = (rand()%6)+1; //1부터 6까지 생성 
		printf("%d\n",result);
		
		if(result == 1) arr[1]++;
		else if(result == 2) arr[2]++;
		else if(result == 3) arr[3]++;
		else if(result == 4) arr[4]++;
		else if(result == 5) arr[5]++;
		else arr[6]++;
	}
	
	for(i=1; i<=6; i++)
	{
		printf("%d번 : %d\n",i,arr[i]);
	}
}


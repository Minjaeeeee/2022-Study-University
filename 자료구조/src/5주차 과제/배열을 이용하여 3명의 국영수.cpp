//(1)배열을 이용하여 3명의국영수 입력받아 합산과 평균

#include <stdio.h>
#include <math.h>
int main(void)
{
	int arr[10];
	int i;
	int sum[10];
	float ave[10];
	int kor[10],eng[10],math[10];
	
	for(i=0; i<3; i++)
	{
		printf("국어,영어,수학 점수를 입력해주세요!: ");
		scanf("%d %d %d",&kor[i],&eng[i],&math[i]);
		ave[i] = ((float)kor[i] + (float)eng[i] + (float)math[i])/ 3;
		sum[i] = kor[i]+eng[i]+math[i];
		printf("합산:%d  평균: %f\n",sum[i],ave[i]);
		printf("\n");
	}
	
	return 0;
}

#include <stdio.h>
#include <math.h>

int main(void)
{
	float ave[3];
	float *AP = ave; //배열값이 들어감  
	int sum[3];
	int *SP = sum; //합계값이 들어감
	int kor=0,eng=0,math=0;
	
	for(int i=0; i<3; i++)
	{
		printf("국어 영어 수학 점수를 입력해주세요!: ");
		scanf("%d%d%d",&kor,&eng,&math);
		sum[i] = kor+eng+math;
		ave[i] = ((float)kor+(float)eng+(float)math)/3;
		
		printf("\n");
	} 
	
	for(int i=0; i<3; i++)
	{
		printf("평균: %f 합계:%d \n",AP[i],SP[i]);
	}
	

	
}

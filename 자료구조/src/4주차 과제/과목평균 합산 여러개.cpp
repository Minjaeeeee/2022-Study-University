#include <stdio.h>


int Sum(int kor, int eng, int math)
{
	int sum=0;
	sum = (kor+eng+math);
	printf("합산: %d\n",sum);	
} 


//3개과목 평균,합산  (전역함수사용) 
double Average(int kor, int eng, int math)
{
	int sum=0;
	double ave=0;
	ave = ((double)kor + (double)eng + (double)math)/ 3;
	printf("평균 : %lf\n",ave);
	return ave;
}



int main()
{
	int kor=0, eng=0, math=0;
	int n;
	int i,j;
	char name[10];
	double ave[10];
	double allave;
	
	
	printf("횟수를 입력해주세요!: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{ 
	    printf("이름을 입력해주세요: ");
	    scanf("%s",&name[i]);
		 
		printf("국어, 영어 , 수학 과목을 입력해주세요.: ");
		scanf("%d%d%d",&kor,&eng,&math);
		
		printf("===========================\n");
		Sum(kor,eng,math);
		ave[i] = Average(kor,eng,math);
		printf("===========================\n");
		printf("\n");
		printf("\n");
		continue; 
	}
	
	for(j=0; j<n; j++)
	{
		allave += ave[j];
	}
	printf("전체 평균: %lf",allave/n);
	
}











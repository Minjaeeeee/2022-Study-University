#include <stdio.h>

//3개과목 평균 (전역함수사용) 
void average(int kor, int eng, int math)
{
	int sum=0;
	double ave=0;
	ave = ((double)kor + (double)eng + (double)math)/ 3;
	printf("평균 : %lf\n",ave);
}



int main()
{
	int kor=0, eng=0, math=0;
	int sum;
	printf("국어, 영어 , 수학 과목을 입력해주세요.: ");
	scanf("%d%d%d",&kor,&eng,&math);
	average(kor,eng,math); 
}





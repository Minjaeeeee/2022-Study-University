#include <stdio.h>

//3개과목 평균 (전역함수사용) 
double average(double kor, double eng, double math)
{
	int sum=0;
	double ave=0;
	ave = (kor +eng +math)/ 3;
    return ave;
}



int main()
{
	int kor=0, eng=0, math=0;
	int sum;
	double ave=0;
	printf("국어, 영어 , 수학 과목을 입력해주세요.: ");
	for(int i=0; i<3; i++)
	{
	    scanf("%d%d%d",&kor,&eng,&math);
	    ave = average(kor,eng,math);
	    printf("평균:%.5lf\n",(double)ave);
	}
}


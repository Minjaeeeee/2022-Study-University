#include <stdio.h>

//3개과목 평균 (전역함수사용) 
int average(int kor, int eng, int math)
{
	int sum=0;
	double ave=0;
	ave = ((double)kor + (double)eng + (double)math)/ 3;
    return (int)ave;
}



int main()
{
	int kor=0, eng=0, math=0;
	int sum;
	double ave;
	printf("국어, 영어 , 수학 과목을 입력해주세요.: ");
	for(int i=0; i<3; i++)
	{
	    scanf("%d%d%d",&kor,&eng,&math);
	    ave = average(kor,eng,math);
	    printf("평균:%lf\n",ave);
	}
	

}


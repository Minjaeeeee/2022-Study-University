#include <stdio.h>

//3������ ��� (�����Լ����) 
void average(int kor, int eng, int math)
{
	int sum=0;
	double ave=0;
	ave = ((double)kor + (double)eng + (double)math)/ 3;
	printf("��� : %lf\n",ave);
}



int main()
{
	int kor=0, eng=0, math=0;
	int sum;
	printf("����, ���� , ���� ������ �Է����ּ���.: ");
	scanf("%d%d%d",&kor,&eng,&math);
	average(kor,eng,math); 
}





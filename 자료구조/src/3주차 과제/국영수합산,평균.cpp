#include <stdio.h>

int main()
{
	int kor=0,eng=0,math=0;
	double ave=0;
	int sum;
	
	scanf("%d%d%d",&kor,&eng,&math);
	sum = kor + eng + math;
	ave = (double)kor + (double)eng + (double)math / 3;
	
	printf("=============================\n");
	printf("�ջ� : %d\n",sum);
	printf("��� : %lf\n",ave);
	printf("=============================\n");
}

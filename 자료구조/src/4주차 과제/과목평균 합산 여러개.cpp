#include <stdio.h>


int Sum(int kor, int eng, int math)
{
	int sum=0;
	sum = (kor+eng+math);
	printf("�ջ�: %d\n",sum);	
} 


//3������ ���,�ջ�  (�����Լ����) 
double Average(int kor, int eng, int math)
{
	int sum=0;
	double ave=0;
	ave = ((double)kor + (double)eng + (double)math)/ 3;
	printf("��� : %lf\n",ave);
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
	
	
	printf("Ƚ���� �Է����ּ���!: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{ 
	    printf("�̸��� �Է����ּ���: ");
	    scanf("%s",&name[i]);
		 
		printf("����, ���� , ���� ������ �Է����ּ���.: ");
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
	printf("��ü ���: %lf",allave/n);
	
}











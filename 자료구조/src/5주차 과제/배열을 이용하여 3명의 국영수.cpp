//(1)�迭�� �̿��Ͽ� 3���Ǳ����� �Է¹޾� �ջ�� ���

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
		printf("����,����,���� ������ �Է����ּ���!: ");
		scanf("%d %d %d",&kor[i],&eng[i],&math[i]);
		ave[i] = ((float)kor[i] + (float)eng[i] + (float)math[i])/ 3;
		sum[i] = kor[i]+eng[i]+math[i];
		printf("�ջ�:%d  ���: %f\n",sum[i],ave[i]);
		printf("\n");
	}
	
	return 0;
}

#include <stdio.h>

int main()
{
	float hwa[10];
	float sub[10];
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("ȭ���µ�: ");
		scanf("%f", &hwa[i]);
		sub[i] = (hwa[i]-32)/1.8;
		printf("===========================================\n");
		printf("ȭ���µ�: %f �����µ�: %f\n",hwa[i],sub[i]);
		printf("===========================================\n");
		printf("\n");
	}
}




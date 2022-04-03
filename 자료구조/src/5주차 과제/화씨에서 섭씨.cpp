#include <stdio.h>

int main()
{
	float hwa[10];
	float sub[10];
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("È­¾¾¿Âµµ: ");
		scanf("%f", &hwa[i]);
		sub[i] = (hwa[i]-32)/1.8;
		printf("===========================================\n");
		printf("È­¾¾¿Âµµ: %f ¼·¾¾¿Âµµ: %f\n",hwa[i],sub[i]);
		printf("===========================================\n");
		printf("\n");
	}
}




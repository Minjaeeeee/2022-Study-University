#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int len = 0;
	
	printf("�ڵ带 �Է��ϼ���!:");
	scanf("%s",str);
	
	len = strlen(str);
	
	printf("���: ");
	for(int i=len-1; i>=0; --i)
	{
		printf("%c",str[i]);
	} 
	
	printf("\n");
	return 0;
}

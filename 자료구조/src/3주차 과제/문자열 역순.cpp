#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int len = 0;
	
	printf("코드를 입력하세요!:");
	scanf("%s",str);
	
	len = strlen(str);
	
	printf("출력: ");
	for(int i=len-1; i>=0; --i)
	{
		printf("%c",str[i]);
	} 
	
	printf("\n");
	return 0;
}

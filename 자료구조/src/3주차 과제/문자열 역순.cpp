#include <stdio.h>
#include <string.h>

//영어로 주시면 출력가능
int main(void)
{
	char str[100];
	int len = 0;
	
	printf("ÄÚµå¸¦ ÀÔ·ÂÇÏ¼¼¿ä!:");
	scanf("%s",str);
	
	len = strlen(str);
	
	printf("Ãâ·Â: ");
	for(int i=len-1; i>=0; --i)
	{
		printf("%c",str[i]);
	} 
	
	printf("\n");
	return 0;
}

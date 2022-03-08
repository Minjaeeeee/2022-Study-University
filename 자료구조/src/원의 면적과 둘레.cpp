#include <stdio.h>

int main(void)
{
	float pi = 3.14;
	float r=0.0; //반지름 입력칸입니다.
	float sik=0.0, doule=0.0; //면적을 구하는 식! 
	float rr = 0.0;
	
	printf("반지름을 입력해주세요!: ");
	scanf("%f",&r);
	rr = 2 * r; //지름의 공식입니다. 
	
	sik = pi * (r * r); //면적을 구하는 식입니다.
	
	printf("원의 지름은?: %f\n",rr); 
	printf("원의 면적은?: %f\n",sik); //만약에 소수점 몇번째 까지 출력해라 하면 %.2lf 이런식으로 사용할 것! 
	
	
	return 0; 
}

//원의 넓이 pi * (r*r) 

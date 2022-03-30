#include <stdio.h>



int Interest(int money1, float rate) //계산값입니다  
{
	int year = 0;	
	int money = money1;	

	while (1)
	{
		if (money1 * 2 > money)	
		{
			money = money + money*(rate / 100);	//복리계산식
			year++;								
		}
		else
			break;
	}
	return year;
}

int main(void)
{
	int money;	//원금
	float rate;	//이율
	int year;	

	printf("투자금액과 이율을 입력해주세요!!: ");
	scanf("%d %f", &money, &rate);
	year = Interest(money, rate);
	printf("투자금액의 2배가 되는 최소년은 결과갑 : %d \n", year);

	return 0;
}




#include <stdio.h>



int Interest(int money1, float rate) //��갪�Դϴ�  
{
	int year = 0;	
	int money = money1;	

	while (1)
	{
		if (money1 * 2 > money)	
		{
			money = money + money*(rate / 100);	//��������
			year++;								
		}
		else
			break;
	}
	return year;
}

int main(void)
{
	int money;	//����
	float rate;	//����
	int year;	

	printf("���ڱݾװ� ������ �Է����ּ���!!: ");
	scanf("%d %f", &money, &rate);
	year = Interest(money, rate);
	printf("���ڱݾ��� 2�谡 �Ǵ� �ּҳ��� ����� : %d \n", year);

	return 0;
}




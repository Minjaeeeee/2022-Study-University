#include <stdio.h>

int main(void)
{
	float pi = 3.14;
	float r=0.0; //������ �Է�ĭ�Դϴ�.
	float sik=0.0, doule=0.0; //������ ���ϴ� ��! 
	float rr = 0.0;
	
	printf("�������� �Է����ּ���!: ");
	scanf("%f",&r);
	rr = 2 * r; //������ �����Դϴ�. 
	
	sik = pi * (r * r); //������ ���ϴ� ���Դϴ�.
	
	printf("���� ������?: %f\n",rr); 
	printf("���� ������?: %f\n",sik); //���࿡ �Ҽ��� ���° ���� ����ض� �ϸ� %.2lf �̷������� ����� ��! 
	
	
	return 0; 
}

//���� ���� pi * (r*r) 

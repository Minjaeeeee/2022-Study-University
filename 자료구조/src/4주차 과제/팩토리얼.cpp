#include <stdio.h>

int factorial(int n);
int main()
{
	int n;
	printf("������ �Է����ּ���!: ");
	scanf("%d",&n);
    printf("%d", factorial(n));

    return 0;
}

int factorial(int n)
{
    if (n == 1)      // n�� 1�� ��
        return 1;    // 1�� ��ȯ�ϰ� ���ȣ���� ����

    return n*factorial(n-1);    // n�� factorial �Լ��� n - 1�� �־ ��ȯ�� ���� ����
}




//double factorial(double n);
//int main()
//{
//	double n;
//	printf("������ �Է����ּ���!: ");
//	scanf("%lf",&n);
//    printf("%lf", factorial(n));
//
//    return 0;
//}
//
//double factorial(double n)
//{
//    if (n == 1)      // n�� 1�� ��
//        return 1;    // 1�� ��ȯ�ϰ� ���ȣ���� ����
//
//    return (int)n*(int)factorial(n-1);    // n�� factorial �Լ��� n - 1�� �־ ��ȯ�� ���� ����

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, t;
	printf("����Ҫ��Լ������������");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (a%b != 0)
	{
		t = a%b;
		a = b;
		b = t;
	}
	printf("�����������Լ��Ϊ��%d\n", b);


	system("pause");
	return 0;
}
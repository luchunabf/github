#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void swap(int*a, int*b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("a=%d,b=%d\n", *a, *b);//Ҫ��Ҫ��*,Ҫ
}

int main()
{
	int a = 0;
	int b = 0;
	printf("������a��b��ֵ:\n");
	scanf("%d %d", &a, &b);
	swap(&a, &b);//��ʱ��*����ʱ��&     �Ե�ַ����

	system("pause");
	return 0;
}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��b��ֵ:\n");
//	scanf("%d %d", &a, &b);
//	int tmp = 0;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d,%d\n", a, b);
//
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	void swap(int* p1, int* p2);//函数声明
	int a, b = 0;
	int* pp1;
	int* pp2;
	printf("请输入a和b的值：\n");
	scanf("%d %d", &a, &b);
	pp1 = &a;
	pp2 = &b;
	if (a<b)
	swap(pp1, pp2);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}

void swap(int* p1, int* p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
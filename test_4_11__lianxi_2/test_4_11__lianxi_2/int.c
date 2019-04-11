#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int a)
{
	if (a > 10)
		print(a / 10);
	printf("%d ", a % 10);
}

int main()
{
	int a = 0;
	printf(" ‰»Îa£∫\n");
	scanf("%d", &a);
	print(a);
	printf("\n");
	system("pause");
	return 0;

}
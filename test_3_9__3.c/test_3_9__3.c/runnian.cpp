#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year=1000;
	printf("���������\n");
	scanf("%d", &year);
	if (year <= 2000)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("year\n");
			printf("����������\n");
		}
		else
		{
			printf("year");
			printf("���겻������\n");
		}
	}
	else
	{
		printf("������Χ\n");

	}
	
	return 0;
}
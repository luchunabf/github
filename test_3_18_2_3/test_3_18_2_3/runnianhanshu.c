#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))	
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	while (1)
	{
		printf("���������\n");
		scanf("%d", &year);
		if (leap_year(year))//�����е�year������
			printf("%d������\n",year);
		else
			printf("%d��������\n",year);
		
	}
	system("pause");
	return 0;
	
}




//void leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		printf("%d������\n",year);
//	else
//		printf("%d��������\n",year);
//}
//
//int main()
//{
//	int year = 0;
//	while (1)
//	{
//		printf("���������\n");
//		scanf("%d", &year);
//		leap_year(year);
//	}
//	system("pause");
//	return 0;
//
//}


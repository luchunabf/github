#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int main()//���һ�����Ķ�������
{
	int num1 = 0, num2=0,i = 0, j = 0;
	int arr1[32] = { 0 };
	int arr2[32] = { 0 };

	printf("������\n");
	scanf("%d %d", &num1,&num2);
	for (i = 0; num1 != 0; i++)
	{
		arr1[i] = num1 % 2;
		num1 = num1 / 2;
		j = i + 1;//j��iѭ�������+1
	}
	for (; j < 32; j++)
	{
		arr1[j] = 0;
	}

	/*for (int p = 0; p < 32; p++)
	{
		printf("%d ", arr1[p]);
	}*/

	/*printf("\n");*/

	int k = 0, m = 0;
	for (k = 0; num2 != 0; k++)
	{
		arr2[k] = num2 % 2;
		num2 = num2 / 2;
		m = k + 1;
	}
	for (; m < 32; m++)
	{
		arr2[m] = 0;
	}

	/*for (int p = 0; p < 32; p++)
	{
		printf("%d ", arr2[p]);
	}*/

	/*printf("\n");*/
	int a = 0, count = 0;
	for (a = 0; a < 32; a++)
	{
		if (arr1[a]!=arr2[a])
			count++;
	}
	printf("�������Ķ��������в�ͬλ��Ϊ��\n");
	printf("%d\n", count);
	system("pause");
	return 0;
}
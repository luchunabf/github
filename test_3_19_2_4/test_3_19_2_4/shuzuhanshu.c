#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int arr[])
{
	int i = 0;
	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);
}

void init(int *arr, int n)//Ϊʲô*arr
{
	for (int i = 0; i < 7; i++)
	arr[i] = n;
	print(arr);//ǰ�涨��ĺ�������Ϳ�����
}

void empty(int *arr)
{
	
	for (int i = 0; i < 7; i++)
	arr[i] = 0;
	print(arr);
}

void reverse(int *arr)
{
	int left = 0; int right = 6;//���õ�д��
	int tmp;
	while (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	print(arr);
}

int main()
{
	int arr[7] = {0};
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);//����������ʱ���д��
	}
	printf("\n���ã�\n");
	reverse(arr);
	printf("\n��ʼ����\n");
	init(arr, 8);
	printf("\n��գ�\n");
	empty(arr);
	printf("\n");
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int count = 3;
	char password[] = { "123456" };//������˫���Ÿ�ֵ
	char input[] = {0};//�����ű�����
	while (count)
	{
		printf("����������");
		scanf("%s", &input);
		if (strcmp(password, input) == 0)
		{
			printf("��ϲ�㣬��¼�ɹ�\n");
			break;
		}
		else if (count!=1)//���һ�����������������
		{
			printf("�����������������\n");
		}
		count--;
	}
	if (count == 0)
	{
		printf("�˳�����\n");
	}


	system("pause");
	return 0;
}
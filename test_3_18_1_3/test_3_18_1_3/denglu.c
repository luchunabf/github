#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char password[] = "123456";
	char arr[10];
	int i = 0;
	for (i = 0; i < 3;i++)
	{
		printf("���������룺");
		scanf("%s", arr);
		if (strcmp(password,arr) == 0)
			break;
		else
			printf("����������������룺");
	}
	if (i == 3)
		printf("�˳�����\n");
	else
		printf("��¼�ɹ�\n");


	system("pause");
	return 0;
}

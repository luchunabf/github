#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("***************\n");
	printf("*****1.play****\n");
	printf("*****0.exit****\n");
	printf("***************\n");
}

void game()
{
	int key = rand() % 100 + 1;
	int word = 0;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &word);
		if (word > key)
			printf("�´���\n");
		else if (word < key)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶�����\n");
			break;
		}
	}
}

int main()
{
	int word = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &word);
		switch (word)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	}
	while(word);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()//��������Ҫ����������ǰ��
{
	printf("********************************\n");
	printf("***********  1.������   ********\n");
	printf("***********  0.�˳���Ϸ ********\n");
	printf("********************************\n");

}

void game()
{
	int input = 0;
	int key = 0;
	key = rand() % 100 + 1;
	printf("���������µ����֣�");
	while (1)
	{
		scanf("%d", &input);
		if (input > key)
		{
			printf("�´���,������ѡ��\n");
		}
		else if (input < key)
		{
			printf("��С�ˣ�������ѡ��\n");
		}
		else
		{
			printf("��ϲ�㣬�ҵ��ˣ�key=%d\n", key);
			break;
		}
	}
}
//��д��
int main()
{
	menu();
	int input = 0;
	srand((unsigned)time(NULL));
	printf("��ѡ��\n");
	do
	{
	scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			input = 0;
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��");
		}
	} while (input);

	
	system("pause");
	return 0;
}


//��ʦ��
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//
//	system("pause");
//	return 0;
//}
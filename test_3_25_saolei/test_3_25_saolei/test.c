#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*****       1.play       *****\n");
	printf("*****       0.exit       *****\n");
	printf("******************************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');
	display_board(show, ROW, COL);
	set_board(mine, ROW, COL);
	/*display_board(mine, ROW, COL);*///��ȡ��
	find_board(mine, show, ROW, COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("make your choices:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

}
int main()
{
	test();
	system("pause");
	return  0;
}
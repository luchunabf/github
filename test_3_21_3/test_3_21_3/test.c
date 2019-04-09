#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("##########################\n");
	printf("#######  1.play  #########\n");
	printf("#######  2.exit  #########\n");
	printf("##########################\n");

}

void game()
{
	char board[ROW][COL];
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	while (1)
	{
		player_board(board, ROW, COL);
		display_board(board, ROW, COL);
		if (winner_board(board, ROW, COL) == 1)
		{
			printf("���Ӯ\n");
			break;
		}
		else if (winner_board(board, ROW, COL) == 3)
		{
			printf("ƽ��\n");
			break;
		}
		comp_board(board, ROW, COL);
		display_board(board, ROW, COL);
		if (winner_board(board, ROW, COL) == 2)
		{
			printf("����Ӯ\n");
			break;
		}
		else if (winner_board(board, ROW, COL) == 3)
		{
			printf("ƽ��\n");
			break;
		}

	}

}

int main()
{
	int input = 0;
	menu();
	do
	{
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("���˳���лл��\n");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"//����game.hͷ�ļ�

void welcome()//��ʼ�� ��ӭ����
{
	printf("                                 \n");
	printf("       ��ӭ������������Ϸ        \n");
	printf("      ���԰� * �汾�� 1.1.0      \n");
	printf("      �����ˣ�  Edision Niu      \n");
	printf("*******��Ϸ������BUG�뷴��*******\n");
	printf("                                 \n");
	printf("��Ϸ�Ѽ�����ϣ��밴���������......\n");
	getchar();
	system("cls");//����
}
void menu()//���˵�
{
	printf("********************************\n");
	printf("** 0.�˳���Ϸ **** 1.��ʼ��Ϸ **\n");
	printf("********************************\n");
}

void menuone()//��Ϸģʽѡ��˵�
{

	printf("********************************\n");
	printf("** 1.�˻���ս **** 2.���˶�ս **\n");
	printf("** 0.������һ�˵� **************\n");
	printf("********************************\n");
}

void printboard(char board[RCW][COL], int rcw, int col)//��ӡ����
{
	int i = 0;
	for (i = 0; i < rcw; i++)
	{
		printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
		if (i != 2)
			printf("|---|---|---|\n");
	}
}

void game()//��Ϸģʽѡ��
{
	int input = 0;
	do
	{
		menuone();
		printf("��ѡ��");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game1();//�˻���ս
			break;
		case 2:
			game2();//���˶�ս
			break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}

void game1()//�˻���ս
{
	char board[RCW][COL] = { 0 };
	memset(board, ' ', RCW*COL * sizeof(board[0][0]));
	int i = 9;
	while (1)
	{
		if (i <= 0)
			break;
		Manplay1(board, RCW, COL);
		i--;
		if (CheckWin(board, RCW, COL) == 'X')
		{
			printf("��һ�ʤ��\n");
			goto flag3;
		}
		printboard(board, RCW, COL);
		printf("��������....\n");
		Sleep(1000);
		if (i <= 0)
			break;
		Computerplay(board, RCW, COL);
		i--;
		if (CheckWin(board, RCW, COL) == '0')
		{
			printf("���Ի�ʤ��\n");
			goto flag3;
		}
		printboard(board, RCW, COL);
	}
	printf("ƽ��\n");
flag3:
	printboard(board, RCW, COL);
}

void game2()//���˶�ս
{
	char board[RCW][COL] = { 0 };
	memset(board, ' ', RCW*COL * sizeof(board[0][0]));
	int i = 9;
	while (1)
	{
		printf("���X����....\n\n");
		if (i <= 0)
			break;
		Manplay1(board, RCW, COL);
		i--;
		if (CheckWin(board, RCW, COL) == 'X')
		{
			printf("���X��ʤ��\n");
			goto flag4;
		}
		printboard(board, RCW, COL);
		printf("���0����....\n\n");
		if (i <= 0)
			break;
		Manplay2(board, RCW, COL);
		i--;
		if (CheckWin(board, RCW, COL) == '0')
		{
			printf("���0��ʤ��\n");
			goto flag4;
		}
		printboard(board, RCW, COL);
	}
	printf("ƽ��\n");
flag4:
	printboard(board, RCW, COL);
}


void Manplay1(char board[RCW][COL], int rcw, int col)//���1����
{
	int x = 0;
	int y = 0;
	printf("��������Ҫ�µ�λ�ã�");
flag1:
	scanf("%d%d", &x, &y);
	if (x > rcw || y > col || x < 0 || y < 0 || (board[x - 1][y - 1] != ' '))
	{
		printf("��λ����Ч�����������룺");
		goto flag1;
	}
	board[x - 1][y - 1] = 'X';
}
void Manplay2(char board[RCW][COL], int rcw, int col)//���2����
{
	int x = 0;
	int y = 0;
	printf("��������Ҫ�µ�λ�ã�");
flag3:
	scanf("%d%d", &x, &y);
	if (x > rcw || y > col || x < 0 || y < 0 || (board[x - 1][y - 1] != ' '))
	{
		printf("��λ����Ч�����������룺");
		goto flag3;
	}
	board[x - 1][y - 1] = '0';
}
void Computerplay(char board[RCW][COL], int rcw, int col)//��������
{

	int x = 0;
	int y = 0;
flag2:
	x = rand() % 3;
	y = rand() % 3;
	if (board[x][y] != ' ')
		goto flag2;
	board[x][y] = '0';
}

char CheckWin(char board[RCW][COL], int row, int col)//�ж���Ϸ���
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	return 0;
}
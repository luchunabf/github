#ifndef __GAME_H__
#define __GAME_H__

#define RCW 3
#define COL 3
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>


void welcome();//��ʼ������
void menu();//���˵�����
void menuone();//ģʽѡ��˵�����
void printboard(char board[RCW][COL], int rcw, int col);//��ӡ����
void game();//��ʼ��Ϸ
void game1();//�˻���ս
void game2();//���˶�ս
void Manplay1(char board[RCW][COL], int rcw, int col);//���һ����
void Manplay2(char board[RCW][COL], int rcw, int col);//��Ҷ�����
void Computerplay(char board[RCW][COL], int rcw, int col);//��������
char CheckWin(char board[RCW][COL], int row, int col); // �ж���Ӯ

#endif    //__GAME_H__
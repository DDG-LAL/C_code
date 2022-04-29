
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"GameFunc.h"

void menu1()
{
	system("cls");
	printf("\n************************************\n");
	printf("\n             井字棋游戏             \n");
	printf("\n               1.Play               ");
	printf("\n               0.Exit               \n");
	printf("\n************************************\n\n");
}

void menu2()
{
	system("cls");
	printf("\n************************************\n");
	printf("\n              游戏模式              \n");
	printf("\n               1.双人               ");
	printf("\n               2.人机               \n");
	printf("\n************************************\n\n");
}

void menu3()
{
	system("cls");
	printf("\n************************************\n");
	printf("\n              游戏难度              \n");
	printf("\n               1.简单               ");
	printf("\n               2.困难               \n");
	printf("\n************************************\n\n");
}

void game()
{
	int gamemode = 0;
	char chess[X][Y];
	initchess(chess);
	menu2();
	int* m = &gamemode;
	choose(m, 1, 2);
	switch (gamemode)
	{
	case 1:
	{
		system("cls");
		human(chess);
		break;
	}
	case 2:
	{
		int dif = 0;
		int* d = &dif;
		menu3();
		choose(d, 1, 2);
		system("cls");
		machine(chess, dif);
		break;
	}
	default:
	{
		printf("\nerr\n");
		system("pause");
		break;
	}
	}
}

int main()
{
	srand((unsigned int)time(NULL));  //随机数初始化
	int choice ;
	do
	{
		menu1();
		int* c = &choice;
		choose(c, 1, 0);
		switch (choice)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("\n退出游戏\n");
			break;
		}
		default:
		{
			printf("\nerr\n");
			system("pause");
			break;
		}
		}
	} while (choice);
	return 0;
}
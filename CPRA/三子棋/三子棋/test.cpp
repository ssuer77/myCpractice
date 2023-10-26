#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()
{
	printf("*****************************\n");
	printf("***** 1.play   0.exit *******\n");
	printf("*****************************\n");

}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret;
	while (1)
	{
		Playermove(board,ROW,COL);
		ret = is_win(board,ROW,COL);
		if (ret != 'c')
			break;
		PCmove(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
			break;
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}





int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	}
	while(input);
	return 0;
}
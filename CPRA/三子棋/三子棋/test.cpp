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
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}





int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}
	while(input);
	return 0;
}
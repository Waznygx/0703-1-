#include "game.h"

int board_full(char board[h][l], int hang, int lie)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < hang; x++)
	{
		for (y = 0; y < lie; y++)
		{
			if (board[x][y] == ' ')
			{
				return 0;//棋子没满
			}
		}
	}
	return 1;//棋盘已满
}
char panduan(char board[h][l], int hang, int lie)//*玩家获胜，#电脑获胜，p平局,j继续
{
	int x = 0;
	int y = 0;
	for (x = 0; x < hang; x++)//横3行
	{
		if (board[x][0] == board[x][1] && board[x][0] == board[x][2] && board[x][0] != ' ')
		{
			return  board[x][0];
		}
	}
	for ( y = 0; y < lie; y++)//竖3列
	{
		if (board[0][y] == board[1][y] && board[0][y] == board[2][y] && board[0][y] != ' ')
		{
			return board[0][y];
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')//对角线
		return board[0][0];
	if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[2][0] != ' ')
		return board[2][0];
	if (1 == board_full(board, h, l))
	{
		return 'p';
	}
	return 'j';
}
void computer(char board[h][l], int hang, int lie)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋：\n");
	while (1)
	{
		x = rand() % hang;
		y = rand() % lie;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
void user(char board[h][l], int hang, int lie)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你要填的坐标：");
		scanf("%d%d", &x, &y);
		printf("\n玩家下棋:\n");
		if (x >= 1 && x <= hang && y >= 1 && y <= lie)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用！\n");
			}
		}
		else
		{
			printf("坐标不合法，请重新输入：\n");
		}
	}
}
void board_display(char board[h][l],int hang,int lie)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < hang; i++)
	{
		for ( j = 0; j < lie; j++)//打印“  |   |   ”,共3行
		{
			printf(" %c ", board[i][j]);
			if (j < lie - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < hang - 1)
		{
			for ( j = 0; j < lie; j++)//打印“---|---|---”，共2行
			{
				printf("---");
				if (j < lie - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void board_menu(char board[h][l], int hang, int lie)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++) 
		{
			board[i][j] = ' ';
		}
	}
}
void game()
{ 
	char board[h][l] = { 0 };
	char ret = 0;
	board_menu(board, h, l);//初始化棋盘
	board_display(board, h, l);//打印棋盘
	while (1)//开始下棋
	{
		user(board, h, l);//玩家
		board_display(board, h, l);
		ret = panduan(board, h, l);
		if (ret != 'j')
		{
			break;
		}
		computer(board, h, l);//电脑
		board_display(board, h, l);
		ret = panduan(board, h, l);
		if (ret != 'j')
		{
			break;
		}
	}		
	if (ret == '*')
	{
		printf("玩家赢!\n");		
	}
	else if (ret == '#')
	{
		printf("电脑赢!\n");
	}
	else 
	{
		printf("平局!\n");
	}
}
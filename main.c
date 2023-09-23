#include "game.h"

void menu()
{
	printf("\n************************************\n");
	printf("************************************\n");
	printf("************  0.exit ***************\n");
	printf("************  1.play ***************\n");
	printf("************************************\n");
	printf("************************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &i);
		switch (i)
		{
		case 0:
			printf("退出游戏!\n");
			break;
		case 1:
			printf("开始游戏!初始棋盘如下：\n");
			game();
			break;
		default:
			printf("输入错误!\n");
			break;
		}
	} while (i);
	return 0;
}
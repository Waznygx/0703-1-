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
		printf("���������ѡ��");
		scanf("%d", &i);
		switch (i)
		{
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		case 1:
			printf("��ʼ��Ϸ!��ʼ�������£�\n");
			game();
			break;
		default:
			printf("�������!\n");
			break;
		}
	} while (i);
	return 0;
}
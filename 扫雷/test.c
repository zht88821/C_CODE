#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()//菜单打印函数
{
	printf("*******************************************\n");
	printf("**************    1. play    **************\n");
	printf("**************    0. exit    **************\n");
	printf("*******************************************\n");
}


void game()
{
	//雷的信息存储
	//1.布置好的雷的信息的棋盘
	char mine[ROWS][COLS] = { 0 };//11*11 
	//2.排查出的雷的信息的棋盘
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//布置雷
	SetMine(mine, ROW, COL);
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//扫雷
	FindMine(mine,show ,ROW,COL);

}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //rand函数设置时间戳
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)//游戏选项
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}
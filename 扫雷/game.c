#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)//初始化棋盘的函数
{                                                             //形参set用来指定要初始化的字符
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)   
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)//打印棋盘的函数
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)//布置雷的函数
{
	int count = EASY_COUNT;//设置雷的数量
	while (count)
	{
		int x = rand() % row + 1;//1-9  用rand()函数设置随机值
		int y = rand() % col + 1;//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}


	}
}


//'0' - '0' = 0
//'1' - '0' = 1
//'3' - '0' = 3
//ASCII码表中 字符数字 减去 字符‘0’ 等于 被减数数字。
int get_mine_count(char mine[ROWS][COLS], int x, int y)//计算(x,y)周围一圈共有多少个雷
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)//防止x,y超出范围
	{
		return mine[x - 1][y] +
			mine[x - 1][y - 1] +
			mine[x][y - 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] +
			mine[x][y + 1] +
			mine[x - 1][y + 1] - 8 * '0';//函数返回值为int,要减去'0’
	}
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) //排查雷的函数
{
	int cnt = ROW * COL - EASY_COUNT;//记录有多少个非雷位置
	int time = 1;//用来之后判断是否第一步就踩到雷
	int over = 0;//用来之后判断是否结束
	int choose = 0;
	while (1)
	{
		printf("请选择->\n 1.排雷   2.做标记   3.取消标记\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:           //排雷的循环
			while (1)   
			{
				printf("请输入排雷的坐标\n");
				int x = 0;
				int y = 0;
				scanf("%d%d", &x, &y);
				if (x<1 || x>row || y<1 || y>col)
				{
					printf("坐标非法,请重新输入\n");
				}
				else if(show[x][y] != '*')//所输入坐标被标记或已被排查的情况下
				{
					if (show[x][y] == '#')
					{
						printf("该位置已被标记，请重新输入\n");
						break;
					}
					else
					{
						printf("该位置已经排查过了，请重新输入\n");
						break;
					}
				}
				else
				{
					if (mine[x][y] == '1')
					{
						if (time)//如果第一步就遇见雷，则重置这个雷的位置
						{
							mine[x][y] = '0';
							while (1)//第一步踩雷 重置雷
							{
								int x1 = rand() % row + 1;
								int y1 = rand() % col + 1;
								if (mine[x1][y1] == '0')
								{
									mine[x1][y1] = '1';
									break;      //跳出第一次重置雷的循环
								}
							}
							time = 0;  //time置为0,表示不是第一次踩到雷
							if (0 == get_mine_count(mine, x, y))
								show[x][y] = '-';
							else
								show[x][y] = get_mine_count(mine, x, y) + '0';
							cnt--;
							int count = Clean(mine, show, x, y);
							cnt -= count;//记录还剩下多少非雷位置
							DisplayBoard(show, row, col);
							goto end;
						}
						else//如果不是第一次遇见雷
						{
							over = 1;
							break;//跳出排雷循环
						}

					}
					else if (mine[x][y] == '0' && show[x][y] == '*')
					{
						time = 0;//当第一步不是雷，在后续踩到雷就判定失败了
						if (0 == get_mine_count(mine, x, y))
							show[x][y] = '-';
						else
							show[x][y] = get_mine_count(mine, x, y)+'0';
						cnt--;
						int count = Clean(mine,show, x, y);
						cnt -= count;
						DisplayBoard(show, row, col);
						break;//跳出排雷循环
					}
				}
			}
			break;   //跳出switch
		case 2:
			printf("请输入标记的坐标\n");
			while (1)
			{
				int x = 0;
				int y = 0;
				scanf("%d%d", &x, &y);
				if (x<1 || x>row || y<1 || y>col)
				{
					printf("坐标越界，请重新输入\n");
					break;
				}
				else if (show[x][y] != '*')
				{
					printf("此处已经排查过，请重新输入\n");
					break;
				}
				else if (show[x][y] == '*')
				{
					show[x][y] = '#';//用'#'标记雷
					DisplayBoard(show, row, col);
					break;
				}
			}
			break;//跳出switch语句
		case 3:
			printf("请输入要取消标记的坐标\n");
			while (1)
			{
				int x = 0;
				int y = 0;
				scanf("%d%d", &x, &y);
				if (x<1 || x>row || y<1 || y>col)
				{
					printf("坐标越界，请重新输入\n");
					break;
				}
				else if (show[x][y] != '#')
				{
					printf("未曾标记，操作失败\n");
					break;
				}
				else if (show[x][y] == '#')
				{
					show[x][y] = '*'; //取消标记
					DisplayBoard(show, row, col);
					break;
				}

			}
			break;//跳出switch语句
		default:
			printf("输入错误，请重新输入\n");
			break;//跳出switch语句
		}
		
	end://跳转语句
		if (over)
		{
			printf("你失败了，游戏结束\n");
			DisplayBoard(mine, row, col);
			break;
		}
		if (cnt == 0)
		{
			printf("恭喜你，成功排雷\n");
			DisplayBoard(mine, row, col);
			break;
		}
	}
}




int Clean(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) //判断当前位置周围有没有雷并清除不是雷的位置
{
	int count = 0;    //记录展开格子数
	for (int i = x - 1; i <= x + 1 && i >= 0 && i <= ROW; i++)
	{
		for (int j = y - 1; j <= y + 1 && j >= 0 && j <= COL; j++)
		{
			if (i == x && j == y)  //跳过坐标为（x,y）的位置
				;
			else if (show[i][j] == '*' && mine[i][j] != '1')  //如果该位置未查看 且不为雷
			{                                                 //判断其周围是否为雷
				int cnt = get_mine_count(mine, i, j);
				if (cnt == 0)//如果周围一圈没有雷
				{
					show[i][j] = '-';//把周围一圈没有雷的置为‘-’
					count += Clean(mine, show, i, j);//周围八个位置继续递归这个函数
				}
				else show[i][j] = cnt + '0';
				if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
				{
					count++;
				}
			}
		}
	}
	return count;//返回展开的格子数
}
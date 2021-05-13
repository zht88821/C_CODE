#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
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


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
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
//ASCII����� �ַ����� ��ȥ �ַ���0�� ���� ���������֡�
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)//��ֹx,y������Χ
	{
		return mine[x - 1][y] +
			mine[x - 1][y - 1] +
			mine[x][y - 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] +
			mine[x][y + 1] +
			mine[x - 1][y + 1] - 8 * '0';
	}
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int cnt = ROW * COL - EASY_COUNT;//��¼�ж��ٸ�����λ��
	int time = 1;
	int over = 0;
	int choose = 0;
	while (1)
	{
		printf("��ѡ��->\n 1.����   2.�����   3.ȡ�����\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			while (1)    //���׵�ѭ��
			{
				printf("���������׵�����\n");
				int x = 0;
				int y = 0;
				scanf("%d%d", &x, &y);
				if (x<1 || x>row || y<1 || y>col)
				{
					printf("����Ƿ�,����������\n");
				}
				else if(show[x][y] != '*')
				{
					if (show[x][y] == '#')
					{
						printf("��λ���ѱ���ǣ�����������\n");
						break;
					}
					else
					{
						printf("��λ���Ѿ��Ų���ˣ�����������\n");
						break;
					}
				}
				else
				{
					if (mine[x][y] == '1')
					{
						if (time)//�����һ���������ף�����������׵�λ��
						{
							mine[x][y] = '0';
							while (1)
							{
								int x1 = rand() % row + 1;
								int y1 = rand() % col + 1;
								if (mine[x1][y1] == '0')
								{
									mine[x1][y1] = '1';
									break;      //������һ�������׵�ѭ��
								}
							}
							time = 0;  //time��Ϊ0,��ʾ���ǵ�һ�βȵ���
							if (0 == get_mine_count(mine, x, y))
								show[x][y] = '-';
							else
								show[x][y] = get_mine_count(mine, x, y) + '0';
							cnt--;
							int count = Clean(mine, show, x, y);
							cnt -= count;//��¼��ʣ�¶��ٷ���λ��
							DisplayBoard(show, row, col);
							goto end;
						}
						else//������ǵ�һ��������
						{
							over = 1;
							break;//��������ѭ��
						}

					}
					else if (mine[x][y] == '0' && show[x][y] == '*')
					{
						time = 0;//����һ�������ף��ں����ȵ��׾��ж�ʧ����
						if (0 == get_mine_count(mine, x, y))
							show[x][y] = '-';
						else
							show[x][y] = get_mine_count(mine, x, y)+'0';
						cnt--;
						int count = Clean(mine,show, x, y);
						cnt -= count;
						DisplayBoard(show, row, col);
						break;//��������ѭ��
					}
				}
			}
			break;   //����switch
		case 2:
			printf("�������ǵ�����\n");
			while (1)
			{
				int x = 0;
				int y = 0;
				scanf("%d%d", &x, &y);
				if (x<1 || x>row || y<1 || y>col)
				{
					printf("����Խ�磬����������\n");
					break;
				}
				else if (show[x][y] != '*')
				{
					printf("�˴��Ѿ��Ų��������������\n");
					break;
				}
				else if (show[x][y] == '*')
				{
					show[x][y] = '#';//��'#'�����
					DisplayBoard(show, row, col);
					break;
				}
			}
			break;
		case 3:
			printf("������Ҫȡ����ǵ�����\n");
			while (1)
			{
				int x = 0;
				int y = 0;
				scanf("%d%d", &x, &y);
				if (x<1 || x>row || y<1 || y>col)
				{
					printf("����Խ�磬����������\n");
					break;
				}
				else if (show[x][y] == '*')
				{
					printf("δ����ǣ�����ʧ��\n");
					break;
				}
				else if (show[x][y] == '#')
				{
					show[x][y] == '*'; //ȡ�����
					DisplayBoard(show, row, col);
					break;
				}

			}
			break;
		default:
			printf("�����������������\n");
			break;
		}
		
	end:
		if (over)
		{
			printf("��ʧ���ˣ���Ϸ����\n");
			DisplayBoard(mine, row, col);
			break;
		}
		if (cnt == 0)
		{
			printf("��ϲ�㣬�ɹ�����\n");
			DisplayBoard(mine, row, col);
			break;
		}
	}
}




int Clean(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) //�жϵ�ǰλ����Χ��û����
{
	int count = 0;    //��¼չ��������
	for (int i = x - 1; i <= x + 1 && i >= 0 && i <= ROW; i++)
	{
		for (int j = y - 1; j <= y + 1 && j >= 0 && j <= COL; j++)
		{
			if (i == x && j == y)  //��������Ϊ��x,y����λ��
				;
			else if (show[i][j] == '*' && mine[i][j] != '1')  //�����λ��δ�鿴 �Ҳ�Ϊ��
			{                                                 //�ж�����Χ�Ƿ�Ϊ��
				int cnt = get_mine_count(mine, i, j);
				if (cnt == 0)//�����ΧһȦû����
				{
					show[i][j] = '-';//����ΧһȦû���׵���Ϊ��-��
					count += Clean(mine, show, i, j);//��Χ�˸�λ�ü����ݹ��������
				}
				else show[i][j] = cnt + '0';
				if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
				{
					count++;
				}
			}
		}
	}
	return count;
}
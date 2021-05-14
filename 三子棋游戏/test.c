#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
//������������Ϸ

void menu()//��ӡ�˵��ĺ���
{
	printf("*****************************************\n");
	printf("******   1. play        0. exit   *******\n");
	printf("*****************************************\n");
}

//��Ϸ������ʵ��
void game()
{
	char ret = 0;//���������ж���Ϸ������ַ�
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };//��ʼ����ȫΪ�ո�
	InitBoard(board,ROW,COL);//��ʼ������
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while(input);
}

int main()
{
	test();
	return 0; 
}
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()//�˵���ӡ����
{
	printf("*******************************************\n");
	printf("**************    1. play    **************\n");
	printf("**************    0. exit    **************\n");
	printf("*******************************************\n");
}


void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ������
	char mine[ROWS][COLS] = { 0 };//11*11 
	//2.�Ų�����׵���Ϣ������
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//������
	SetMine(mine, ROW, COL);
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//ɨ��
	FindMine(mine,show ,ROW,COL);

}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //rand��������ʱ���
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)//��Ϸѡ��
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}
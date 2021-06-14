#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void menu()
{
	printf("*********************************************************\n");
	printf("********      1. add               2. del       *********\n");
	printf("********      3. search            4. modify    *********\n");
	printf("********      5. show              6. sort      *********\n");
	printf("********      0. exit                           *********\n");
	printf("*********************************************************\n");
}


int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含:data指针、size、capacity
	// 初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//销毁通信录 - 释放动态开辟的内存
			DestroyContact(&con);
			printf("退出通信录\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}

	} while (input);

	return 0;
}
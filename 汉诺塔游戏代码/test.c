#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void move(char a, char b)
{
	printf("%c-->%c\n",a,b);
}

void hannuota(int n, char a, char b, char c)//表示有n个盘子，从a利用b转移到c.
{
	if (n == 1)
	{
		printf("%c-->%c\n",a,c);                     //汉诺塔游戏大致分为三个步骤（a,b,c三根柱子，由a利用b转移到c的情况）
	}                                                //①先将a柱子上的n-1个盘子利用c转移到b。
	else                                             //②再将a柱子上最后一个大盘子转移到c。
	{                                                //③再将b柱子上的n-1个盘子利用a转移到c。
		hannuota(n - 1, a, c, b);//递归调用          //第①步和第③步可以细分重复这三个步骤，实现了递归调用。
		move(a, c);
		hannuota(n - 1, b, a, c);
	}

}

int main()
{
	int n = 0;
	printf("汉诺塔游戏：请输入游戏的盘子数>:");
	scanf("%d", &n);
	hannuota(n, 'a', 'b', 'c');
	return 0;
}
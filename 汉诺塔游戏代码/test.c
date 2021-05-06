#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void move(int n, int a, int b, int c)  //n为圆盘个数，a移动到c，用b做临时棒
{
	if (n == 1)
		printf("%d——>%d\n", a, c);
	else
	{
		move(n - 1, a, c, b);  //递归调用，移动a到b，用c做临时棒
		printf("%d——>%d\n", a, c);
		move(n - 1, b, a, c);  //递归调用，将b移动到c，用a做临时棒
	}
}
int main()
{
	int n;   //圆盘个数
	scanf("%d", &n);
	move(n, 1, 2, 3);  //1、2、3代表三个棒
	return 0;
}

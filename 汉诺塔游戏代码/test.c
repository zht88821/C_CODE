#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void move(int n, int a, int b, int c)  //nΪԲ�̸�����a�ƶ���c����b����ʱ��
{
	if (n == 1)
		printf("%d����>%d\n", a, c);
	else
	{
		move(n - 1, a, c, b);  //�ݹ���ã��ƶ�a��b����c����ʱ��
		printf("%d����>%d\n", a, c);
		move(n - 1, b, a, c);  //�ݹ���ã���b�ƶ���c����a����ʱ��
	}
}
int main()
{
	int n;   //Բ�̸���
	scanf("%d", &n);
	move(n, 1, 2, 3);  //1��2��3����������
	return 0;
}

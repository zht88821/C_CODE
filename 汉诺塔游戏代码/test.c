#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void move(char a, char b)
{
	printf("%c-->%c\n",a,b);
}

void hannuota(int n, char a, char b, char c)//��ʾ��n�����ӣ���a����bת�Ƶ�c.
{
	if (n == 1)
	{
		printf("%c-->%c\n",a,c);                     //��ŵ����Ϸ���·�Ϊ�������裨a,b,c�������ӣ���a����bת�Ƶ�c�������
	}                                                //���Ƚ�a�����ϵ�n-1����������cת�Ƶ�b��
	else                                             //���ٽ�a���������һ��������ת�Ƶ�c��
	{                                                //���ٽ�b�����ϵ�n-1����������aת�Ƶ�c��
		hannuota(n - 1, a, c, b);//�ݹ����          //�ڢٲ��͵ڢ۲�����ϸ���ظ����������裬ʵ���˵ݹ���á�
		move(a, c);
		hannuota(n - 1, b, a, c);
	}

}

int main()
{
	int n = 0;
	printf("��ŵ����Ϸ����������Ϸ��������>:");
	scanf("%d", &n);
	hannuota(n, 'a', 'b', 'c');
	return 0;
}
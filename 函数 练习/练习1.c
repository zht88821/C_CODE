#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>

//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
// }
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	int max1 = get_max(100, 300);
//	printf("max1 = %d\n", max1);
//	return 0;
//}

//void Swap1(int x, int y)//������ɽ���
//{//Swap1---��ֵ����
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)//����ɽ���
//{//Swap2---��ַ����
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main() //����������ʵ�֡�
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d , b = %d \n", a, b);
//	Swap1(a, b);
//	printf("a = %d , b = %d \n ",a,b);
//	Swap2(&a, &b);
//	printf("a = %d , b = %d \n", a, b);
//
//	return 0;
//}

//����������1��������������0
int is_prime(int n)   //ʵ���ж��Ƿ�Ϊ�����ĺ���
{
	int m = 0;
	for (m = 2; m < sqrt(n); m++)
	{
		if (n % m == 0)
			return 0;
			
	}
		return 1;
}

int main()
{
	//��ӡ100-200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;

}

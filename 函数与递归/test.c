#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//#include"add.h"
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//void print(int n) //�����ݹ�  ˳�����������ַ�
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//
//}

//int my_strlen(char* str)//�õݹ鷽ʽģ��ʵ��strlen����
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//
//}

//int Fac1(int n) //��ѭ����ʽ��n�Ľ׳˵ĺ���
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)//�õݹ�ķ�����n�Ľ׳˵ĺ���
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d\n", ret);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


////�ú����ݹ鷽���n��쳲�������
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)  //�ú�����ѭ����ʽ���n��쳲�������
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//int my_strlen(char* arr)//���ַ������ȵĺ���
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//
//void reverse_string(char* arr)//�ݹ鷽��ʹһ���ַ����鵹��
//{
//	//��һ��
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	//�ڶ����� �ڶ����ֿɵݹ�
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	//������
//	arr[len - 1] = tmp;
//
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";//gfedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//����1729 �����1+7+2+9=19
//DigitSum(1729)
//DigitSum(172) + 1729 % 10
//DigitSum(17) + 172 % 10 + 1729 % 10
//DigitSum(1) + 17 % 10 + 172 % 10 + 1729 % 10
//1+7+2+9
//int DigitSum(unsigned int num)//�õݹ鷽����һ��������ʮ���Ƹ�λ���֮��
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//	
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


double Pow(int n, int k)//�õݹ麯����n��k�η�
{
	//n*k = n * n^(k-1)
	if (k < 0)
		return(1.0 / (Pow(n, -k)));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret = %lf\n", ret);

	return 0;
}
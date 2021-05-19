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

//void print(int n) //函数递归  顺序输出输入的字符
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
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//
//}

//int my_strlen(char* str)//用递归方式模拟实现strlen函数
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
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//
//}

//int Fac1(int n) //用循环方式求n的阶乘的函数
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
//int Fac2(int n)//用递归的方法求n的阶乘的函数
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d\n", ret);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


////用函数递归方求第n个斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)  //用函数中循环方式求第n个斐波那契数
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


//int my_strlen(char* arr)//求字符串长度的函数
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
//void reverse_string(char* arr)//递归方法使一个字符数组倒序
//{
//	//第一步
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	//第二步， 第二步又可递归
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	//第三步
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


//输入1729 ，输出1+7+2+9=19
//DigitSum(1729)
//DigitSum(172) + 1729 % 10
//DigitSum(17) + 172 % 10 + 1729 % 10
//DigitSum(1) + 17 % 10 + 172 % 10 + 1729 % 10
//1+7+2+9
//int DigitSum(unsigned int num)//用递归方法求一个正整数十进制各位相加之和
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


double Pow(int n, int k)//用递归函数求n的k次方
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
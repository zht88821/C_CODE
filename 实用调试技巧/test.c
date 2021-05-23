#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//通过调试找到bug,少了每次算一个数的阶乘给ret赋值1
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;           //通过调试发现死循环的原因是越界的arr[12]与
//	}                         //i用的是同一块空间，把arr[12]赋值成0的同时
//	system("pause");         //将i也赋值成0，造成了死循环
//
//	return 0;
//}



//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

#include<assert.h>
//char* my_strcpy(char* dest,const char* src)//const修饰不能被修修改
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含‘\0’字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1,arr2));
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	int n = 100;
//
//	const int* p = &num;
//	*p = 20;//err
//	//const放在指针变量的*左边，修饰的是*p，也就是说不能通过p来改变*p(num)的值
//	int* const p = &num;
//	p = &n;//err
//	//const放在指针变量的*右边，修饰的是指针变量p本身，p不能被改变了
//
//
//	return 0;
//}


int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main()
{

	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}
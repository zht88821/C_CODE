#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//创建一个数组-存放整形10个
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof计算arr4所占空间的大小
//	//7个元素-char  7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串的长度 -\0之前的字符个数
//	//{a b c d e f \0}
//	//6
//
//	int n = 5;
//	char ch[n];//err
//
//
//	return 0;
//}

//1.strlen 和 sizeof没有什么关联
//2.strlen 是求字符串长度的-只能针对字符串求长度 - 库函数 - 使用得引头文件
//3.sizeof 计算变量、数组、类型的大小 - 单位是字节 - 操作符


//int main()
//{
//	char arr1[] = "abc";  //这样初始化最后还有一个'\0'
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//}

//int main()
//{
//	/*char arr[] = "abcdef";
//	printf("%c\n", arr[3]);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
////		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()//一维数组的地址在内存中是连续存放的
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()//二维数组的初始化
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//可以不完全初始化
//	char ch[5][6];
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };//能不指定行，但一定要指定列
//	return 0;
//}

//int main()//二维数组的使用
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()  //二维数组的地址在内存中也是按顺序连续存放的
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
//		}
//		
//	}
//	return 0;
//}

void bubble_sort(int arr[],int sz)//升序的冒泡排序函数
{
	//	确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序

			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序马，排成升序
	//arr是数组，我们对数组arr进行传参，实际上 传递过去的是数组arr首元素的地址
	bubble_sort(arr, sz);//冒泡排序函数
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

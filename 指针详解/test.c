#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串，将a的地址存入指针变量p中
//	*p = 'W';
//	printf("%s\n", p);   //Segmentation fault - 段错误，常量字符串不能被修改
//	//printf("%c\n", *p);//打印一个字符
//	//printf("%s\n", p);//打印一个字符串
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	if (p1 == p2)//p1 p2指针指向相同的字符串常量，相同的常量只存在一份
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	if (arr1 == arr2)//arr1和arr2是不同变量的地址，数组名代表地址，所以不相等
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


//指针数组 是数组，用来存放指针
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	return 0;
//}


//int main()//用指针数组将三个整型数组打印出来
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	//int* p = NULL;//p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//	//char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	                  //数组指针 - 指向数组的指针 - 存放数组的地址
//	/*int arr[10] = { 0 };*/
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//%arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//p就是数组指针
//	
//
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//指向char*[5]数组的指针
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;//指向int[10]数组的指针
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa == arr
//	//}
//
//	for (i = 0; i < 10; i++)//使用数组指针打印数组
//	{
//		printf("%d ", (*pa)[i]);
//	}
//
//	return 0;
//}

////参数是数组的形式
//void print1(int arr[3][5], int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);//等价
// 
//		}
//		printf("\n");
//	}
// }
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);//二维数组首元素的地址为第一行数据的首地址
//
//	return 0;
//}
//
//
//

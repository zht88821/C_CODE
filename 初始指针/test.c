#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int my_strlen(char* str)//求数组元素个数的函数（使用指针实现）
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//两个同个数组内的指针相减，表示中间的元素个数
//}
//
//int main()
//{
//	//strlen - 求字符串长度
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//int main()
//{
//	float values[5];
//	float* vp;
//	int i = 0;
//	for (vp = &values[5]; vp > &values[0];)//指针的比较大小应用
//	{
//		*--vp = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f\n", values[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p   ============   %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	printf("%d\n", **ppa);
//	return 0;
//}


int main()//指针数组应用
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
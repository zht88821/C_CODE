#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int my_strlen(char* str)//������Ԫ�ظ����ĺ�����ʹ��ָ��ʵ�֣�
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//����ͬ�������ڵ�ָ���������ʾ�м��Ԫ�ظ���
//}
//
//int main()
//{
//	//strlen - ���ַ�������
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
//	for (vp = &values[5]; vp > &values[0];)//ָ��ıȽϴ�СӦ��
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
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	printf("%d\n", **ppa);
//	return 0;
//}


int main()//ָ������Ӧ��
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//����һ������-�������10��
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��-char  7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ����ĳ��� -\0֮ǰ���ַ�����
//	//{a b c d e f \0}
//	//6
//
//	int n = 5;
//	char ch[n];//err
//
//
//	return 0;
//}

//1.strlen �� sizeofû��ʲô����
//2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶� - �⺯�� - ʹ�õ���ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С - ��λ���ֽ� - ������


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%c\n", arr[3]);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
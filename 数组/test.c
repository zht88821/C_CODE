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
//	char arr1[] = "abc";  //������ʼ�������һ��'\0'
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
//int main()//һά����ĵ�ַ���ڴ�����������ŵ�
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

//int main()//��ά����ĳ�ʼ��
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//���Բ���ȫ��ʼ��
//	char ch[5][6];
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };//�ܲ�ָ���У���һ��Ҫָ����
//	return 0;
//}

//int main()//��ά�����ʹ��
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
//int main()  //��ά����ĵ�ַ���ڴ���Ҳ�ǰ�˳��������ŵ�
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

void bubble_sort(int arr[],int sz)//�����ð��������
{
	//	ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����

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
	//��arr�����������ų�����
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���� ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
	bubble_sort(arr, sz);//ð��������
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

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
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//ͨ�������ҵ�bug,����ÿ����һ�����Ľ׳˸�ret��ֵ1
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
//		arr[i] = 0;           //ͨ�����Է�����ѭ����ԭ����Խ���arr[12]��
//	}                         //i�õ���ͬһ��ռ䣬��arr[12]��ֵ��0��ͬʱ
//	system("pause");         //��iҲ��ֵ��0���������ѭ��
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
//char* my_strcpy(char* dest,const char* src)//const���β��ܱ����޸�
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
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
//	//�ַ�������
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
//	//const����ָ�������*��ߣ����ε���*p��Ҳ����˵����ͨ��p���ı�*p(num)��ֵ
//	int* const p = &num;
//	p = &n;//err
//	//const����ָ�������*�ұߣ����ε���ָ�����p����p���ܱ��ı���
//
//
//	return 0;
//}


int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��

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
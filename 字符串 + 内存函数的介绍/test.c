#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


////size_t == unsigned int
//
//int my_strlen(const char* str)//�Լ�ʵ��strlen����
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	//����ʾ��
//	//char arr[] = {'a','b','c','d','e','f'};
//	//int len = my_strlen(arr);
//
//	if (strlen("abc") - strlen("abcdef") > 0)//�˴���ӡhehe����Ϊstrlen�ķ�������size_tΪunsigned int
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//char* my_strcpy(char* dest, const char* src)//�Լ�ʵ��strcpy����
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//


//char* my_strcat(char* dest, const char* src)//�Լ�ʵ��strcat����
//{
//	char* ret = dest;
//	assert(dest && src);//�ж��Ƿ�Ϊ��ָ��
//	
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()//strcmp�������÷�
//{
//	char* p1 = "abc";
//	char* p2 = "qbc";
//
//	int ret = strcmp(p1, p2);
//	if (ret > 0)
//	{
//		printf("p1 > p2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("p1 == p2\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p1 < p2\n");
//	}
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)//�Լ�ʵ��strcmp����
//{
//	assert(str1 && str2);//�ж�str1 �� str2�Ƿ�Ϊ��ָ��
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//}
//
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}



//int main()//strncpy���÷�
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2,4);//����������ָ���������ֽ��������������ֽ�������Դ�ַ�������ʱ�����治���Ĳ�'\0'
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()//strncat���÷�
//{
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//׷�ӵ�ʱ��ĩβ�Զ���ӡ�\0��
//	//���׷�ӵĸ�����Դ�ַ���������ֻ�ǰ�Դ�ַ���׷�ӹ�ȥ
//	printf("%s\n", arr1);
//	
//	return 0;
//}



////int strncmp(const char* string1,const char* string2,size_t count);
//
//int main()//strncmp���÷�
//{
//	const char* p1 = "abczdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}



//strstr - �����ַ���

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "defa";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//char* my_strstr(const char* p1, const char* p2)// ����strstr��ģ��ʵ��
//{
//	assert(p1 != NULL);//���ԣ��ж�p1,p2��Ϊ��ָ��
//	assert(p2 != NULL);
//	char* s1 = NULL;//����s1,s2�������иı䣬�����Ķ�p1,p2.
//	char* s2 = NULL;
//	char* cur = (char*)p1;//��¼s1�Ķ�ǰ��λ��
//	if (*p2 == '\0')//��*p2Ϊ���ַ���ʱ��ֱ�����p1�ĵ�ַ
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;//������һ�αȽ�ʱ�ĸ�ֵ
//		s2 = (char*)p2;//
//
//		while (*s1 && *s2 && (*s1 == *s2))//��*s1��*s2��Ϊ\0,��*s1 == *s2ʱ������ָ��ָ����һ��Ԫ�ؽ��бȽ�
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')//��������һ��whileѭ��ʱ�����*s2���Ϊ��\0������ʾ��p1���ҵ��Ӵ�
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if(*s1 == '\0')
//		{
//			return NULL;			
//		}
//		cur++;//����һ��λ�ÿ�ʼû�ҵ�ʱ����ʼλ��+1�����Ƚ�
//	}
//	return NULL;//�Ҳ����Ӵ�
//
//}
//
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//int main()//strtok������ʹ��    ���ڷָ��ַ���
//{
//	/*char* strtok(char* strToken, const char* strDelimit);*/  //��һ����������Ҫ�ָ���ַ���
//	char arr[] = "zpw@bitedu.tech";                            //�ڶ��������Ƿָ���ļ���
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//
//	char* ret = NULL;
//
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



#include <errno.h>

//int main()//strerror������ʹ��
//{
//	//������  ������Ϣ
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char*str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//��test.txt�ļ�
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}



#include <ctype.h>
//
//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);//�ַ����ຯ��     �ж��Ƿ�ΪСд��ĸa-z
//	//int ret = isdigit(ch);//�ַ����ຯ��   �ж��Ƿ�Ϊ1-9����
//	//printf("%d\n", ret);
//
//	//char ch = tolower('q');//�ַ�ת������    תΪСд
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}



//C���Ա�׼:
//memcpy ֻҪ�����ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

//void* my_memmove(void* dest, void* src, size_t num)//ģ��ʵ��memmove����
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(dest != NULL);
//
//	if (dest < src)// ��Ŀ��ָ����Ҫ�������ַ���ָ�����  ��ǰ�����ӡ
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else if (dest >= src)//��Ŀ��ָ�벻��Ҫ�������ַ���ָ�����  �Ӻ���ǰ��ӡ
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t num)//ģ��ʵ��memcpy���� - �ڴ濽������
//{//����������num���������ֽ���
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(dest != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//++�����ȼ���ǿ������ת���ߣ�����ǰ��++
//		++(char*)src;
//	}
//	return ret;
//}


//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()//����my_memcpy����
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}


//int main()//����my_memmove����
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(arr1, arr1 + 2, 5 * sizeof(arr1[0]));// 3 4 5 6 7 6 7 8 9 10 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	
//	//my_memmove(arr1 + 5, arr1 + 2, 5 * sizeof(arr1[0]));//1 2 3 4 5 3 4 5 6 7
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr1[i]);
//	//}
//
//
//	return 0;
//}



//int main()//memcmp������ʹ��
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//
//
//	return 0;
//}
//
//
////meset - �ڴ�����
//
//int main()
//{
//	char arr1[10] = { 0 };
//	memset(arr1, "#", 10);
//	int arr2[10] = { 0 };
//	memset(arr2, 1, 10);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


////size_t == unsigned int
//
//int my_strlen(const char* str)//自己实现strlen函数
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
//	//错误示范
//	//char arr[] = {'a','b','c','d','e','f'};
//	//int len = my_strlen(arr);
//
//	if (strlen("abc") - strlen("abcdef") > 0)//此处打印hehe，因为strlen的返回类型size_t为unsigned int
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//char* my_strcpy(char* dest, const char* src)//自己实现strcpy函数
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
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


//char* my_strcat(char* dest, const char* src)//自己实现strcat函数
//{
//	char* ret = dest;
//	assert(dest && src);//判断是否为空指针
//	
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
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


//int main()//strcmp函数的用法
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


//int my_strcmp(const char* str1, const char* str2)//自己实现strcmp函数
//{
//	assert(str1 && str2);//判断str1 和 str2是否为空指针
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
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



//int main()//strncpy的用法
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2,4);//第三个参数指定拷贝的字节数，当拷贝的字节数大于源字符串长度时，后面不够的补'\0'
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()//strncat的用法
//{
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//追加的时候末尾自动添加‘\0’
//	//如果追加的个数比源字符串长，就只是把源字符串追加过去
//	printf("%s\n", arr1);
//	
//	return 0;
//}



////int strncmp(const char* string1,const char* string2,size_t count);
//
//int main()//strncmp的用法
//{
//	const char* p1 = "abczdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}



//strstr - 查找字符串

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "defa";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//char* my_strstr(const char* p1, const char* p2)// 函数strstr的模拟实现
//{
//	assert(p1 != NULL);//断言，判断p1,p2不为空指针
//	assert(p2 != NULL);
//	char* s1 = NULL;//设置s1,s2后续进行改变，而不改动p1,p2.
//	char* s2 = NULL;
//	char* cur = (char*)p1;//记录s1改动前的位置
//	if (*p2 == '\0')//当*p2为空字符串时，直接输出p1的地址
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;//进行新一次比较时的赋值
//		s2 = (char*)p2;//
//
//		while (*s1 && *s2 && (*s1 == *s2))//当*s1，*s2不为\0,且*s1 == *s2时，两个指针指向下一个元素进行比较
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')//当跳出上一个while循环时，如果*s2如果为‘\0’，表示在p1中找到子串
//		{
//			return cur;//找到子串
//		}
//		if(*s1 == '\0')
//		{
//			return NULL;			
//		}
//		cur++;//当从一个位置开始没找到时，开始位置+1继续比较
//	}
//	return NULL;//找不到子串
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
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
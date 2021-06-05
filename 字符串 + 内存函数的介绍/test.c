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



//int main()//strtok函数的使用    用于分割字符串
//{
//	/*char* strtok(char* strToken, const char* strDelimit);*/  //第一个参数是需要分割的字符串
//	char arr[] = "zpw@bitedu.tech";                            //第二个参数是分割符的集合
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
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

//int main()//strerror函数的使用
//{
//	//错误码  错误信息
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char*str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//打开test.txt文件
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
//	////int ret = islower(ch);//字符分类函数     判断是否为小写字母a-z
//	//int ret = isdigit(ch);//字符分类函数   判断是否为1-9数字
//	//printf("%d\n", ret);
//
//	//char ch = tolower('q');//字符转换函数    转为小写
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



//C语言标准:
//memcpy 只要处理不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝

//void* my_memmove(void* dest, void* src, size_t num)//模拟实现memmove函数
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(dest != NULL);
//
//	if (dest < src)// 当目的指针在要拷贝的字符串指针左边  从前往后打印
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else if (dest >= src)//当目的指针不在要拷贝的字符串指针左边  从后往前打印
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t num)//模拟实现memcpy函数 - 内存拷贝函数
//{//第三个参数num代表拷贝的字节数
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(dest != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//++的优先级比强制类型转换高，所以前置++
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
//int main()//测试my_memcpy函数
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三",20},{"李四",30} };
//	struct S arr4[3] = { 0 };
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}


//int main()//测试my_memmove函数
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



//int main()//memcmp函数的使用
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
////meset - 内存设置
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
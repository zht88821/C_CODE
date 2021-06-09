#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//void* malloc(size_t size);  参数为要开辟的字节数
////malloc函数，动态申请内存
////free函数与malloc函数配合使用，用来释放动态申请的内存
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	p = NULL;//free完后,p还是指向原来的空间，需要手动置为NULL。
//
//	return 0;
//}


////void* calloc(size_t num,size_t size);
////calloc函数也是用来动态开辟空间的，第一个参数用来指定数组的大小，第二个参数用来指定
////每个元素的大小，并把每个元素初始化为0，返回这个空间的指针，如果开辟失败,则返回NULL
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
////realloc
////调整动态开辟内存空间的大小
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//假设这里，20个字节不能满足我们的使用了，希望能有40个字节的空间
//	//可以使用realloc来调整动态开辟的内存
//
//	//realloc的注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新
//	//找一块新的内存区域开辟，并自动释放原来旧的内存区域，最后返回新开辟的内存空间的地址
//	//3.得用一个新的变量来接收realloc函数的返回值
//	//
//	int* ptr = realloc(p, 40);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//int main()
//{
//	//realloc可以实现malloc的功能
//	int* p = realloc(NULL, 80);//将第一个参数置为NULL 
//
//	return 0;
//}


#include <windows.h>
//
//int main()//对动态内存的错误操作
//{
//	//1. 对NULL指针解引用操作
//	//int *p = malloc(40);
//	////p进行相关的判断
//	//*p = 10;//malloc开辟空间失败-对NULL指针解引用
//
//	//2.对动态开辟内存的越界访问
//	//int *p = (int*)malloc(40);//10个int 0-9
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////越界
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	//3. 对非动态开辟内存使用free释放
//	//int a = 10;
//	//int *p = &a;
//	////...
//	////对非动态开辟内存使用free释放
//	//free(p);
//	//p = NULL;
//
//	//4. 使用free释放动态开辟内存的一部分
//	//int*p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	//// 使用free释放动态开辟内存的一部分
//	//free(p);
//	//p =NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;
//
//	//free(p);
//
//	//6.动态开辟内存忘记释放（内存泄漏）
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//
//	return 0;
//}
//



//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////动态内存分配笔试题一：问Test执行后会发生什么
////1. 程序会发生崩溃，因为在Test函数中调用的GetMemory函数的形参p是str的一份临时拷贝，
////在GetMemory函数退出的时候，p就销毁了，str仍然指向NULL,所以后续的strcpy和printf
////都非法访问内存了。
////2.而且GetMemory函数没有free已经用完的动态空间，会造成内存泄露
//int main()
//{
//	Test();
//
//	return 0;
//}




////笔试题一的改正方法1
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//  free(str);
//  str = NULL;
//}
//int main()
//{
//	Test();
//
//	return 0;
//}




////笔试题一的改正方法2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//
//	return 0;
//}
//




////笔试题2
////运行Test函数，会发生什么结果?
////返回栈空间地址的问题
////GetMemory函数虽然把地址返回了，但是函数结束的时候把p指向的这块空间
////又还给了os，所以下面str调用的时候会发生非法访问
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}



////笔试题3
////执行Test函数会有什么结果?
//
////malloc后没有free，内存泄露
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}



//笔试题4
//非法访问内存，str提前free，动态开辟的内存还给了os，但是str仍然指向
//动态开辟的内存，后面的strcpy和printf操作就非法内存访问了
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free后并不会把str置为NULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();

	return 0;
}













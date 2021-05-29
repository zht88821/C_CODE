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

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//
//	//数组指针 - 指向数组
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//
//	return 0;
//}


//void test(int arr[])//ok
//{}
//void test(int arr[10]) //ok
//{}
//void test(int* arr) //ok
//{}
//void test2(int* arr[20])//ok
//{}
//void test2(int** arr)//ok
//{}
////一维数组传参
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr);
//
//	return 0;
//}


//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//err
//{}
//void test(int arr[][5])//ok
//{}
//void test(int arr[3][])//err
//{}
//void test(int* arr)//no
//{}
//void test(int* arr[5])//no
//{}
//void test(int (*arr)[5])//ok
//{}
//void test(int** arr)//no
//{}
//二维数组传参
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//
//	return 0;
//}



//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
////一级指针传参
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//
//	return 0;
//}


//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()//当函数形参为一级指针时，实参可以传什么
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//
//	return 0;
//}

//
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()//二级指针传参
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//
//	return 0;
//}



//void test(char** p)
//{}
//int main()//当函数的形参为二级指针时，实参可以传什么？
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);//ok
//	test(ppc);//ok
//	test(arr);//ok
//
//	return 0;
//}



//int Add(int  x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;//函数指针
//	printf("%d\n", (*pa)(2, 3));//5
//
//	return 0;
//}



//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//
//	return 0;
//}


//// signal是一个函数声明
////signal函数的参数有2个，第一个是int,第二个是函数指针，该函数指针指向的函数的参数是int,返回类型是void
////signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int,返回类型是void
////
//void(* signal(int, void (*)(int))) (int);
////简化
//typedef void(*pfun_t)(int);//将函数指针类型void(* ) (int )重命名成pfun_t
//pfun_t signal(int, pfun_t);


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));//pa为函数指针时，调用pa时可以不用'*'
//	printf("%d\n",Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()//函数指针的数组应用
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5  -1  6   0
//	}
//
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf,能够指向my_strcpy
//char* (*pf)(char*, const char*);
////
////2.写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);


////计算器
//void menu()
//{
//	printf("*********************************\n");
//	printf("**     1.add         2.sub     **\n");
//	printf("**     3.mul         4.div     **\n");
//	printf("**             0.exit          **\n");
//	printf("*********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void Calc(int (*pf)(int, int))//回调函数的应用
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));//被调用的pf函数指针指向的函数称为回调函数
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr 是一个函数指针数组 - 转移表
//	int(*pfArr[5])(int,int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	
//	} while (input);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//  int* arr[10]; //指针数组
//	int(*p)[10] = &arr;//数组指针
//
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组- 函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	//
//	return 0;
//}


//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	void* p = &a;//ok
//	p = &ch;//ok
//	*p = 0;//err
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 不能进行+-整数的操作
//	return 0;
//}


#include<stdlib.h>
#include<string.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//
//
//int cmp_int(const void* e1, const void* e2)//int型的比较函数
//{
//	//比较两个整型值的
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()//测试排序整型数组
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int cmp_float(const void* e1, const void* e2)//float型的比较函数
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//void test2()//测试排序float型数组
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp函数
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()//测试排序结构体数组
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小 - 单位是字节
//	//第四个元素：是函数指针，比较两个元素的函数的地址 - 由函数使用者自己实现
//	//函数指针的两个参数是：待比较的两个元素的地址
//}
//
//
////实现bubbl_sort函数的程序员，他不知道未来排序的数据类型
////那程序员也不知道，待比较的两个元素的类型
//
//void Swap(char* buf1, char* buf2, int width)//交换函数
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))//自制的qsort函数，实现升序
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) >0)
//			{
//				//交换函数
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//
//void test5()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//
//int main()
//{
//	/*test1();
//	test2();*/
//	//test3();
//	//test4();
//	test5();
//
//	return 0;
//}




//int main()
//{
	//数组名是首元素的地址
	//1. sizeof(数组名) - 数组名表示整个数组
	//2. &数组名 - 数组名表示整个数组
	//
	//一维数组
	//int a[] = { 1, 2, 3, 4 };//4*4 = 16
	//printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节- 16
	//printf("%d\n", sizeof(a + 0));//4/8 - 数组名这里表示首元素的地址，a+0 还是首元素地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(*a));   //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
	//printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示首元素的值，a+1 第2个元素的地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(a[1])); //4 - 第2个元素的大小
	//printf("%d\n", sizeof(&a));   //4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(*&a));  //16 - &a数组的地址，数组的地址解引用访问那个数组，sizeof计算的就是数组的大小单位是字节
	//printf("%d\n", sizeof(&a + 1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 是第二个元素的地址

	//字符数组
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err  strlen()的参数要求是一个地址而不是一个值
	////printf("%d\n", strlen(arr[1]));//err

	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	//printf("%d\n", sizeof(arr));//sizeof计算机的是数组大小，6*1 = 6字节
	//printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4/8字节
	//printf("%d\n", sizeof(*arr));   //1   arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr));   //4/8 &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址


	/*return 0;
}*/




//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7  sizeof(arr)计算的数组的大小，单位是字节：7
//	printf("%d\n", sizeof(arr + 0));//4/8 计算的是地址的大小-arr + 0是首元素的地址
//	printf("%d\n", sizeof(*arr));   //1 *arr 是首元素，sizeof(*arr)计算首元素的大小
//	printf("%d\n", sizeof(arr[1])); //1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	printf("%d\n", sizeof(&arr));   //4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组后的地址，但也是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 第二个元素的地址
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err 
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr - 数组的地址-数组指针 char(*p)[7] = &arr;
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//
//	//printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
//	//printf("%d\n", sizeof(p + 1));//4/8 - p+1 得到的是字符b的地址
//	//printf("%d\n", sizeof(*p));//1 *p 就是字符串的第一个字符 - 'a'
//	//printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0] == *(arr+0)    p[0] == *(p+0) == 'a'
//	//printf("%d\n", sizeof(&p));//4/8  地址
//	//printf("%d\n", sizeof(&p + 1));//4/8 地址 
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8 地址
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16 a[0]相当于第一行做为一维数组的数组名，
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实就是第一行第一个元素的地址
//	//所以 a[0]+1 就是第一行第二个元素的地址- 地址大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4- *(a[0] + 1)) 是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1)); //4     //a是二维数组的数组名，没有sizeof(a)，也没有&(a),所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址
//	//a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16, sizeof(a[1]) 计算第二行的大小,单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4, 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));//16  a是首元素地址-第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16  sizeof只计算大小，不会去访问数组
//
//	return 0;
//}




//int main()//指针面试题1
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//强制类型转化为int*，这时候ptr-1就是倒退一个字节
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}



//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000，如下表达式的值分别为多少？
////已知 ，结构体Test类型的变量大小是20个字节
//
//int main()//指针面试题2
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//00100020
//	printf("%p\n", (unsigned long)p + 0x1);//00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004
//
//	return 0;
//}


//int main()//指针面试题3
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//&a取出的是整个数组的地址，+1跳过整个数组
//	int* ptr2 = (int*)((int)a + 1);//a强制类型转化成int，+1向后跳一个字节
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}


//int main()//指针面试题4
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式的值是逗号最后一个值
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//
//	return 0;
//}


//int main()   //指针面试题5
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//虽然指针p和a的类型不符，编译后，p指针+1跳过的是4个int
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//考察的是指针的运算
//	//两个指针相减，以地址类型打印，打印的是补码     以整型打印，打印的是两个指针相隔的元素个数
//
//	return 0;
//}


//int main()//指针面试题6
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//跳过整个二维数组
//	int* ptr2 = (int*)(*(aa + 1));//指向第二行再解引用，相当于是第二行第一个元素的地址
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//		
//	return 0;
//}


//int main()//指针面试题7
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;//pa++ == a++
//	printf("%s\n", *pa);
//
//	return 0;
//}



int main()//指针面试题8
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };//四个char*指针分别指向四个字符串的首元素
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW

	return 0;
}

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
//	const char* p = "abcdef";//"abcdef"��һ�������ַ�������a�ĵ�ַ����ָ�����p��
//	*p = 'W';
//	printf("%s\n", p);   //Segmentation fault - �δ��󣬳����ַ������ܱ��޸�
//	//printf("%c\n", *p);//��ӡһ���ַ�
//	//printf("%s\n", p);//��ӡһ���ַ���
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
//	if (p1 == p2)//p1 p2ָ��ָ����ͬ���ַ�����������ͬ�ĳ���ֻ����һ��
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	if (arr1 == arr2)//arr1��arr2�ǲ�ͬ�����ĵ�ַ�������������ַ�����Բ����
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


//ָ������ �����飬�������ָ��
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
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


//int main()//��ָ�����齫�������������ӡ����
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
//	//int* p = NULL;//p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	                  //����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	/*int arr[10] = { 0 };*/
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//%arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//p��������ָ��
//	
//
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//ָ��char*[5]�����ָ��
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;//ָ��int[10]�����ָ��
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
//	for (i = 0; i < 10; i++)//ʹ������ָ���ӡ����
//	{
//		printf("%d ", (*pa)[i]);
//	}
//
//	return 0;
//}

////�������������ʽ
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
////������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);//�ȼ�
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
//	print2(arr, 3, 5);//��ά������Ԫ�صĵ�ַΪ��һ�����ݵ��׵�ַ
//
//	return 0;
//}
//
//
//

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//
//	//����ָ�� - ָ������
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
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
////һά���鴫��
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
//��ά���鴫��
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
////һ��ָ�봫��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//
//	return 0;
//}


//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()//�������β�Ϊһ��ָ��ʱ��ʵ�ο��Դ�ʲô
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
//int main()//����ָ�봫��
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
//int main()//���������β�Ϊ����ָ��ʱ��ʵ�ο��Դ�ʲô��
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
//int main()//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;//����ָ��
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


//// signal��һ����������
////signal�����Ĳ�����2������һ����int,�ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
////signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
////
//void(* signal(int, void (*)(int))) (int);
////��
//typedef void(*pfun_t)(int);//������ָ������void(* ) (int )��������pfun_t
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
//	printf("%d\n", pa(2, 3));//paΪ����ָ��ʱ������paʱ���Բ���'*'
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
//int main()//����ָ�������Ӧ��
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5  -1  6   0
//	}
//
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf,�ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
////
////2.дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);


////������
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
//void Calc(int (*pf)(int, int))//�ص�������Ӧ��
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));//�����õ�pf����ָ��ָ��ĺ�����Ϊ�ص�����
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//pfArr ��һ������ָ������ - ת�Ʊ�
//	int(*pfArr[5])(int,int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//  int* arr[10]; //ָ������
//	int(*p)[10] = &arr;//����ָ��
//
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������- ����ָ�������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
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
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//	return 0;
//}


#include<stdlib.h>
#include<string.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
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
//int cmp_int(const void* e1, const void* e2)//int�͵ıȽϺ���
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()//����������������
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
//int cmp_float(const void* e1, const void* e2)//float�͵ıȽϺ���
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//void test2()//��������float������
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()//��������ṹ������
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
//	//���ĸ�Ԫ�أ��Ǻ���ָ�룬�Ƚ�����Ԫ�صĺ����ĵ�ַ - �ɺ���ʹ�����Լ�ʵ��
//	//����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//}
//
//
////ʵ��bubbl_sort�����ĳ���Ա������֪��δ���������������
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//
//void Swap(char* buf1, char* buf2, int width)//��������
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
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))//���Ƶ�qsort������ʵ������
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) >0)
//			{
//				//��������
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
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
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
	//����������Ԫ�صĵ�ַ
	//1. sizeof(������) - ��������ʾ��������
	//2. &������ - ��������ʾ��������
	//
	//һά����
	//int a[] = { 1, 2, 3, 4 };//4*4 = 16
	//printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
	//printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�صĵ�ַ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*a));   //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	//printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));   //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷����Ǹ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	//printf("%d\n", sizeof(&a + 1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ

	//�ַ�����
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0));//���ֵ
	////printf("%d\n", strlen(*arr));//err  strlen()�Ĳ���Ҫ����һ����ַ������һ��ֵ
	////printf("%d\n", strlen(arr[1]));//err

	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

	//printf("%d\n", sizeof(arr));//sizeof��������������С��6*1 = 6�ֽ�
	//printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
	//printf("%d\n", sizeof(*arr));   //1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr));   //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ


	/*return 0;
}*/




//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7  sizeof(arr)���������Ĵ�С����λ���ֽڣ�7
//	printf("%d\n", sizeof(arr + 0));//4/8 ������ǵ�ַ�Ĵ�С-arr + 0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));   //1 *arr ����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1])); //1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));   //4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1 �ڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err 
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr - ����ĵ�ַ-����ָ�� char(*p)[7] = &arr;
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//
//	//printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
//	//printf("%d\n", sizeof(p + 1));//4/8 - p+1 �õ������ַ�b�ĵ�ַ
//	//printf("%d\n", sizeof(*p));//1 *p �����ַ����ĵ�һ���ַ� - 'a'
//	//printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0] == *(arr+0)    p[0] == *(p+0) == 'a'
//	//printf("%d\n", sizeof(&p));//4/8  ��ַ
//	//printf("%d\n", sizeof(&p + 1));//4/8 ��ַ 
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8 ��ַ
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16 a[0]�൱�ڵ�һ����Ϊһά�������������
//	//sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ��a[0]��ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	//���� a[0]+1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ- ��ַ��С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4- *(a[0] + 1)) �ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1)); //4     //a�Ƕ�ά�������������û��sizeof(a)��Ҳû��&(a),����a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ
//	//a+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16, sizeof(a[1]) ����ڶ��еĴ�С,��λ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//4, �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(*a));//16  a����Ԫ�ص�ַ-��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16  sizeofֻ�����С������ȥ��������
//
//	return 0;
//}




//int main()//ָ��������1
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//ǿ������ת��Ϊint*����ʱ��ptr-1���ǵ���һ���ֽ�
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
////����p ��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪ ���ṹ��Test���͵ı�����С��20���ֽ�
//
//int main()//ָ��������2
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//00100020
//	printf("%p\n", (unsigned long)p + 0x1);//00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//00100004
//
//	return 0;
//}


//int main()//ָ��������3
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//&aȡ��������������ĵ�ַ��+1������������
//	int* ptr2 = (int*)((int)a + 1);//aǿ������ת����int��+1�����һ���ֽ�
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}


//int main()//ָ��������4
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ��ֵ�Ƕ������һ��ֵ
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//
//	return 0;
//}


//int main()   //ָ��������5
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//��Ȼָ��p��a�����Ͳ����������pָ��+1��������4��int
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//�������ָ�������
//	//����ָ��������Ե�ַ���ʹ�ӡ����ӡ���ǲ���     �����ʹ�ӡ����ӡ��������ָ�������Ԫ�ظ���
//
//	return 0;
//}


//int main()//ָ��������6
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//����������ά����
//	int* ptr2 = (int*)(*(aa + 1));//ָ��ڶ����ٽ����ã��൱���ǵڶ��е�һ��Ԫ�صĵ�ַ
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//		
//	return 0;
//}


//int main()//ָ��������7
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;//pa++ == a++
//	printf("%s\n", *pa);
//
//	return 0;
//}



int main()//ָ��������8
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };//�ĸ�char*ָ��ֱ�ָ���ĸ��ַ�������Ԫ��
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() //不用第三个参数交换两个数(有溢出风险的方法）
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d,b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d,b = %d\n", a, b);
//}


//int main()   //不用第三个参数交换两个数（不会溢出）
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d,b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);
//}


//int main()//计算一个整形值在内存中存储的二进制数里有多少个1
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//
//}


//创建一个结构体类型-struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()//.操作符和->操作符的使用
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1 = { "张三", 20,"2019010305" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	// 结构体指针 ->成员名
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	////结构体变量.成员名
//	return 0;
//}

//隐式转换-1.整形提升   
//2.算数转换(向精度大的转换）


////整形提升-当表达式中操作数达不到整数类型精度时，转换成整形精度进行运算，运算完后再截断
////整形提升原则-有符号位补符号位，无符号补0
//int main()//整形提升的例子
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	//a和b如何相加
//	//00000000000000000000000000000011
//	//
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 源码
//	//-126
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()//整形提升示例
//{
//	char a = 0xb6;//1011 0110  -整型提升-11111111111111111111111110110110
//	short b = 0xb600;//1011011000000000    -整型提升-11111111111111111011011000000000
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4     只要参与表达式运算都会发生整形提升
//	printf("%u\n", sizeof(!c));//1
//	printf("%u\n", sizeof(-c));//4
//	
//	return 0;
//}



//int count_bit_one(unsigned int n)///写一个函数求n的二进制（补码）表示中有几个1
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	 }
//	return count;
//}


//int count_bit_one(int n)///写一个函数求n的二进制（补码）表示中有几个1
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//int count_bit_one(int n)///写一个函数求n的二进制（补码）表示中有几个1
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//n = n & (n-1)
//n
//13
//1101     n
//1100     n-1

//1100     n
//1011     n-1

//1000     n
//0111     n-1

//0000     n
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//
//	return 0;
//}


//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//	
// }
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	
//	return 0;
//}

//void print(int m)  //分别打印一个整数的二进制序列的奇数位和偶数位
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
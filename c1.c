#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0)//== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}

	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");

	return 0;
}
//int main()// 多个字符从两端移动，向中间汇聚 的代码。
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
// }
//int main()     //二分查找（折半查找）代码
//{
//	int k = 17;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0; //左下标
//	int right = sz - 1; //右下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) 
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int ret = 1;
//	long sum = 0;
//	int n = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int ret = 1;
//	long sum = 0;
//	int n = 0;
//	int i = 1;
//	printf("请输入一个正整数：>");
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	/*for (i = 1; i <= n; i++)
//	{
//		sum *=  i;
//	}*/
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} 	
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);//输入密码，并存放在password数组中。
//	//缓冲区还剩余一个’\n'
//	//读取一下'\n'
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)
//		putchar(ch);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	for (a = 1; a <= 100; a++)
//		if (a % 2 == 1)
//			printf("%d\n", a);
//	return 0;
//}
////int main()
//{
//	int a=0;
//	if (a % 2 == 1)
//		printf("a是一个奇数");
//	else
//		printf("a是一个偶数");
//		return 0;
//}
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n"); 
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("书名:%s\n", pb->name);
//	printf("价格:%d元\n",pb->price);
//	/*printf("书名:%s\n", (*pb).name);
//	printf("价格:%d元\n", (*pb).price);*/
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//
//		return 0;
//}
//
////int main()
////{
////	int a = 10;
////	printf("%p\n", &a);
//
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//
//
//	printf("好offer\n");
//	return 0;
//}
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码嘛？（选择1 or 0):>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//	
//	//printf("Hello,World!");
//	//return 0;
//	//printf("%d\n", sizeof(char));
//	//printf("%d\n", sizeof(short));
//	//printf("%d\n", sizeof(long));
//	//printf("%d\n", sizeof(long long));
//	//printf("%d\n", sizeof(float));
//	//printf("%d\n", sizeof(double));
//	//return 0;
//	
//}
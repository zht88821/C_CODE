#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<string.h>

//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
// }
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	int max1 = get_max(100, 300);
//	printf("max1 = %d\n", max1);
//	return 0;
//}

//void Swap1(int x, int y)//������ɽ���
//{//Swap1---��ֵ����
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)//����ɽ���
//{//Swap2---��ַ����
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main() //����������ʵ�֡�
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d , b = %d \n", a, b);
//	Swap1(a, b);
//	printf("a = %d , b = %d \n ",a,b);
//	Swap2(&a, &b);
//	printf("a = %d , b = %d \n", a, b);
//
//	return 0;
//}

//����������1��������������0
////int is_prime(int n)   //ʵ���ж��Ƿ�Ϊ�����ĺ���
////{
////	int m = 0;
////	for (m = 2; m < sqrt(n); m++)
////	{
////		if (n % m == 0)
////			return 0;
////			
////	}
////		return 1;
////}
////
////int main()
////{
////	//��ӡ100-200֮�������
////	int i = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//�ж�i�Ƿ�Ϊ����
////		if (is_prime(i) == 1)
////			printf("%d\n", i);
////	}
////	return 0;
////
////}

 
//int is_leap_year(int y)  //�ж�����ĺ���
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)//���ֲ��ҵĺ���ʵ��
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//	
//
//	
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//

//void Add(int* p)//ÿ�ε��ò���+1
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);  //1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}

//void new_line()  
//{
//	printf("hehe\n");
//}
//void three_line()  //������Ƕ�׵���
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));//��ʽ����---��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));  //printf�����ķ���ֵ�Ǵ�ӡ���ַ�����.
//	return 0;
//}

//��������
int Add(int, int);

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}














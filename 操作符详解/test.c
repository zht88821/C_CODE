#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() //���õ�������������������(��������յķ�����
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d,b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d,b = %d\n", a, b);
//}


//int main()   //���õ������������������������������
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d,b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);
//}


//int main()//����һ������ֵ���ڴ��д洢�Ķ����������ж��ٸ�1
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


//����һ���ṹ������-struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()//.��������->��������ʹ��
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Stu s1 = { "����", 20,"2019010305" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	// �ṹ��ָ�� ->��Ա��
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	////�ṹ�����.��Ա��
//	return 0;
//}

//��ʽת��-1.��������   
//2.����ת��(�򾫶ȴ��ת����


////��������-�����ʽ�в������ﲻ���������;���ʱ��ת�������ξ��Ƚ������㣬��������ٽض�
////��������ԭ��-�з���λ������λ���޷��Ų�0
//int main()//��������������
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	//a��b������
//	//00000000000000000000000000000011
//	//
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - Դ��
//	//-126
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()//��������ʾ��
//{
//	char a = 0xb6;//1011 0110  -��������-11111111111111111111111110110110
//	short b = 0xb600;//1011011000000000    -��������-11111111111111111011011000000000
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
//	printf("%u\n", sizeof(+c));//4     ֻҪ������ʽ���㶼�ᷢ����������
//	printf("%u\n", sizeof(!c));//1
//	printf("%u\n", sizeof(-c));//4
//	
//	return 0;
//}



//int count_bit_one(unsigned int n)///дһ��������n�Ķ����ƣ����룩��ʾ���м���1
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


//int count_bit_one(int n)///дһ��������n�Ķ����ƣ����룩��ʾ���м���1
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


//int count_bit_one(int n)///дһ��������n�Ķ����ƣ����룩��ʾ���м���1
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
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
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

//void print(int m)  //�ֱ��ӡһ�������Ķ��������е�����λ��ż��λ
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("ż��λ:\n");
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
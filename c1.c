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
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0)//== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}

	}
	if (i == 3)
		printf("��������������˳�����\n");

	return 0;
}
//int main()// ����ַ��������ƶ������м��� �Ĵ��롣
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
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls - �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
// }
//int main()     //���ֲ��ң��۰���ң�����
//{
//	int k = 17;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0; //���±�
//	int right = sz - 1; //���±�
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
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
//	printf("������һ����������>");
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
//	printf("���������룺");
//	scanf("%s", password);//�������룬�������password�����С�
//	//��������ʣ��һ����\n'
//	//��ȡһ��'\n'
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("a��һ������");
//	else
//		printf("a��һ��ż��");
//		return 0;
//}
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n"); 
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	printf("����:%s\n", pb->name);
//	printf("�۸�:%dԪ\n",pb->price);
//	/*printf("����:%s\n", (*pb).name);
//	printf("�۸�:%dԪ\n", (*pb).price);*/
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
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//
//
//	printf("��offer\n");
//	return 0;
//}
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô������ѡ��1 or 0):>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
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
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//void* malloc(size_t size);  ����ΪҪ���ٵ��ֽ���
////malloc��������̬�����ڴ�
////free������malloc�������ʹ�ã������ͷŶ�̬������ڴ�
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;//free���,p����ָ��ԭ���Ŀռ䣬��Ҫ�ֶ���ΪNULL��
//
//	return 0;
//}


////void* calloc(size_t num,size_t size);
////calloc����Ҳ��������̬���ٿռ�ģ���һ����������ָ������Ĵ�С���ڶ�����������ָ��
////ÿ��Ԫ�صĴ�С������ÿ��Ԫ�س�ʼ��Ϊ0����������ռ��ָ�룬�������ʧ��,�򷵻�NULL
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
////realloc
////������̬�����ڴ�ռ�Ĵ�С
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
//	//�������20���ֽڲ����������ǵ�ʹ���ˣ�ϣ������40���ֽڵĿռ�
//	//����ʹ��realloc��������̬���ٵ��ڴ�
//
//	//realloc��ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc����������
//	//��һ���µ��ڴ����򿪱٣����Զ��ͷ�ԭ���ɵ��ڴ�������󷵻��¿��ٵ��ڴ�ռ�ĵ�ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//int main()
//{
//	//realloc����ʵ��malloc�Ĺ���
//	int* p = realloc(NULL, 80);//����һ��������ΪNULL 
//
//	return 0;
//}


#include <windows.h>
//
//int main()//�Զ�̬�ڴ�Ĵ������
//{
//	//1. ��NULLָ������ò���
//	//int *p = malloc(40);
//	////p������ص��ж�
//	//*p = 10;//malloc���ٿռ�ʧ��-��NULLָ�������
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int *p = (int*)malloc(40);//10��int 0-9
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////Խ��
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//int a = 10;
//	//int *p = &a;
//	////...
//	////�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//free(p);
//	//p = NULL;
//
//	//4. ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	////���տռ�
//	//// ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//free(p);
//	//p =NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;
//
//	//free(p);
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
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
////��̬�ڴ���������һ����Testִ�к�ᷢ��ʲô
////1. ����ᷢ����������Ϊ��Test�����е��õ�GetMemory�������β�p��str��һ����ʱ������
////��GetMemory�����˳���ʱ��p�������ˣ�str��Ȼָ��NULL,���Ժ�����strcpy��printf
////���Ƿ������ڴ��ˡ�
////2.����GetMemory����û��free�Ѿ�����Ķ�̬�ռ䣬������ڴ�й¶
//int main()
//{
//	Test();
//
//	return 0;
//}




////������һ�ĸ�������1
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




////������һ�ĸ�������2
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




////������2
////����Test�������ᷢ��ʲô���?
////����ջ�ռ��ַ������
////GetMemory������Ȼ�ѵ�ַ�����ˣ����Ǻ���������ʱ���pָ������ռ�
////�ֻ�����os����������str���õ�ʱ��ᷢ���Ƿ�����
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



////������3
////ִ��Test��������ʲô���?
//
////malloc��û��free���ڴ�й¶
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



//������4
//�Ƿ������ڴ棬str��ǰfree����̬���ٵ��ڴ滹����os������str��Ȼָ��
//��̬���ٵ��ڴ棬�����strcpy��printf�����ͷǷ��ڴ������
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�󲢲����str��ΪNULL
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













#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���    stu -�ṹ���ǩ    struct stu-�ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����


//typedef struct stu//�ṹ��������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//��struct stu����������Ϊstu
//
//int main()
//{
//	struct stu s1 = {"����",20,"15249287076","��"};//�ֲ��Ľṹ�����
//	stu s2 = {"����",30,"15958885888","����"};
//
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T//�ṹ���Ƕ��
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14}, arr };//�ṹ��Ƕ�׵ĳ�ʼ��
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//
//	return 0;
//}



typedef struct stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;

void print1(stu tmp)
{
	printf("name:  %s\n", tmp.name);
	printf("age:   %d\n", tmp.age);
	printf("tele:  %s\n", tmp.tele);
	printf("sex:   %s\n", tmp.sex);
}

void print2(stu* ps)
{
	printf("name:  %s\n", ps->name);
	printf("age:   %d\n", ps->age);
	printf("tele:  %s\n", ps->tele);
	printf("sex:   %s\n", ps->sex);
}


int main()
{
	stu s = { "����",40,"15858886666","��" };
	print1(s);
	print2(&s);

	return 0;
}
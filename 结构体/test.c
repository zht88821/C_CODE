#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 描述一个学生的一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字    stu -结构体标签    struct stu-结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量


//typedef struct stu//结构体重命名
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//将struct stu类型名更改为stu
//
//int main()
//{
//	struct stu s1 = {"张三",20,"15249287076","男"};//局部的结构体变量
//	stu s2 = {"旺财",30,"15958885888","保密"};
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
//struct T//结构体的嵌套
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14}, arr };//结构体嵌套的初始化
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//
//	return 0;
//}



typedef struct stu
{
	//成员变量
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
	stu s = { "李四",40,"15858886666","男" };
	print1(s);
	print2(&s);

	return 0;
}
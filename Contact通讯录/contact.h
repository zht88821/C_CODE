#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#pragma once
//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录类型
typedef struct Contact
{
	struct PeoInfo* data;//存放1000个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
}Contact;


//声明函数
void InitContact(struct Contact* ps);//初始化通讯录函数
void AddContact(struct Contact* ps);//增加元素到通讯录
void ShowContact(const struct Contact* ps);//打印通讯录的函数
void DelContact(struct Contact* ps);//删除指定的联系人
void SearchContact(const struct Contact* pc);//查找指定的人的信息
void ModifyContact(struct Contact* ps);//修改指定联系人
void SortContact(struct Contact* ps);//给通讯录排序
void DestroyContact(Contact* ps);//释放动态开辟的内存
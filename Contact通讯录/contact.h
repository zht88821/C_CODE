#include<stdio.h>
#include<string.h>


#pragma once
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

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

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};


//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼����
void AddContact(struct Contact* ps);//����Ԫ�ص�ͨѶ¼
void ShowContact(const struct Contact* ps);//��ӡͨѶ¼�ĺ���
void DelContact(struct Contact* ps);//ɾ��ָ������ϵ��
void SearchContact(const struct Contact* pc);//����ָ�����˵���Ϣ
void ModifyContact(struct Contact* ps);//�޸�ָ����ϵ��
void SortContact(struct Contact* ps);//��ͨѶ¼����
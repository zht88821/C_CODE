#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void InitContact(struct Contact* ps)//初始化通讯录函数
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;

}

void CheckCapacity(struct Contact* ps)//检测通讯录容量的函数
{
	if (ps->size == ps->capacity)
	{
		//增容
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}


void AddContact(struct Contact* ps)//增加元素到通讯录
{
	//检测当前通讯录的容量
	//如果满了，就增加空间
	//如果没满，啥事都不干
	CheckCapacity(ps);
	//增加数据
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("添加成功\n");
}


void ShowContact(const struct Contact* ps)//打印通讯录的函数
{
	int i = 0;
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	} 
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//找不到的情况
}

void DelContact(struct Contact* ps)//删除指定的联系人
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//FindByName函数找到了返回名字所在元素的下标
	//找不到返回 -1；
	pos = FindByName(ps, name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}



void SearchContact(const struct Contact* ps)//查找指定的人的信息
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}

}


void ModifyContact(struct Contact* ps)//修改指定联系人
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");
	}
}


void SortContact(struct Contact* ps)//给通讯录排序
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		for (j = 0; j <ps->size-1-i ; j++)
		{
			if (1 == strcmp((ps->data[j].name), (ps->data[j + 1].name)))
			{
				struct PeoInfo s = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = s;
			}
		}
	}
	printf("排序完成\n");
}


void DestroyContact(Contact* ps)//释放动态开辟的内存
{
	free(ps->data);
	ps->data = NULL;
}


#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60   系统cmd命令-设置60秒后关机
	//system() - c语言执行系统命令
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟后关机，如果输入：“我是猪”，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)  //比较两个字符串 -strcmp( )
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60   系统cmd命令-设置60秒后关机
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在一分钟后关机，如果输入：“我是猪”，就取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)  //比较两个字符串 -strcmp( )
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60   ϵͳcmd����-����60���ػ�
	//system() - c����ִ��ϵͳ����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺������������ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)  //�Ƚ������ַ��� -strcmp( )
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
//	//shutdown -s -t 60   ϵͳcmd����-����60���ػ�
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺������������ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)  //�Ƚ������ַ��� -strcmp( )
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


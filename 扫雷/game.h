#pragma once
//��������Ҫ�ĳ���
#define ROW 9 //��Ȧ����-��9
#define COL 9//��Ȧ����-��9
#define ROWS ROW+2//��Ȧ����-��11
#define COLS COL+2//��Ȧ����-��11
#define EASY_COUNT 10//�����׵�����

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void InitBoard(char board[ROWS][COLS], int rows,int cols,char set);//��ʼ�����̵ĺ���
void DisplayBoard(char board[ROWS][COLS],int row,int col);//��ӡ���̵ĺ���
void SetMine(char board[ROWS][COLS],int row,int col);//�����׵ĺ���
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//�Ų��׵ĺ���
int Clean(char mine[ROWS][COLS], char show[ROWS][COLS],int x,int y);//һ���ų�һ��Ƭ�����������׵ĺ���

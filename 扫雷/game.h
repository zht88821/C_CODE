#pragma once
//定义所需要的常量
#define ROW 9 //内圈棋盘-行9
#define COL 9//内圈棋盘-列9
#define ROWS ROW+2//外圈棋盘-行11
#define COLS COL+2//外圈棋盘-列11
#define EASY_COUNT 10//设置雷的数量

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void InitBoard(char board[ROWS][COLS], int rows,int cols,char set);//初始化棋盘的函数
void DisplayBoard(char board[ROWS][COLS],int row,int col);//打印棋盘的函数
void SetMine(char board[ROWS][COLS],int row,int col);//布置雷的函数
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//排查雷的函数
int Clean(char mine[ROWS][COLS], char show[ROWS][COLS],int x,int y);//一次排除一大片相连但不是雷的函数

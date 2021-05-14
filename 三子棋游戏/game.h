#pragma once

#define ROW 3//定义需要的常量--行和列的大小
#define COL 3//方便游戏棋盘大小的更改

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘的函数
void PlayerMove(char board[ROW][COL],int row,int col);//玩家走棋的函数
void ComputerMove(char board[ROW][COL], int row, int col);//电脑走棋的函数



//IsWin()函数告诉我们四种游戏状态
//玩家赢 - ‘*’
//电脑赢 - ‘#’
//平局   - ‘Q’
//继续   -  'C'

char IsWin(char board[ROW][COL], int row, int col);//判断游戏状态的函数
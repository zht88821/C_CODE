#pragma once

#define ROW 3//������Ҫ�ĳ���--�к��еĴ�С
#define COL 3//������Ϸ���̴�С�ĸ���

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//����������
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ�����̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ���̵ĺ���
void PlayerMove(char board[ROW][COL],int row,int col);//�������ĺ���
void ComputerMove(char board[ROW][COL], int row, int col);//��������ĺ���



//IsWin()������������������Ϸ״̬
//���Ӯ - ��*��
//����Ӯ - ��#��
//ƽ��   - ��Q��
//����   -  'C'

char IsWin(char board[ROW][COL], int row, int col);//�ж���Ϸ״̬�ĺ���
#define _CRT_SECURE_NO_WARNINGS
#define h 3
#define l 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game();
void board_menu(char board[h][l], int hang, int lie);
void board_display(char board[h][l], int hang, int lie);
void user(char board[h][l], int hang, int lie);
void computer(char board[h][l], int hang, int lie);
char panduan(char board[h][l], int hang, int lie);
int board_full(char board[h][l], int hang, int lie);

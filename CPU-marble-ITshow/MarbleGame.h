#include <stdio.h>
#include <windows.h>
#include <time.h>

#ifndef KEY_CODE
#define KEY_CODE

/*함수 선언*/

void init();
void gotoxy(int, int);
void setColor(int, int);
void gLoop(int);
void move(int*, int*, int, int, int*, int*);
int keyControl(int, int, int);
int menuDraw();
int maplistDraw();
void drawMap(int*, int*);
void drawUI(int*, int*, int*);
void drawTime(double, double);
int drawlevel();
void endDraw();
void failDraw();

//키보드 값
#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#endif

#ifndef __COLOR_LIST_
#define __COLOR_LIST_

enum {
	black,
	blue,
	green,
	cyan,
	red,
	purple,
	brown,
	lightgray,
	darkgray,
	lightblue,
	lightgreen,
	lightcyan,
	lightred,
	lightpurple,
	yellow,
	white
};

#endif

void init() {
	//system("mode con cols=120 lines=30 | title Marble Game");

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //콘솔 핸들 가져오기
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);   //콘솔 핸들 가져오기
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

//첫번쨰 : 텍스트, 두번쨰 : 배경
void setColor(int forground, int background) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);	//콘솔 핸들 가져오기
	int code = forground + background * 16;
	SetConsoleTextAttribute(consoleHandle, code);
}
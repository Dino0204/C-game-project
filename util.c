#include "main.h"

// »öÄ¥
void SetColor(int forground, int background) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int code = forground + background * 16;
	SetConsoleTextAttribute(consoleHandle, code);
}

// Ä¿¼­¼û±è
void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

// > »èÁ¦
void resetCursor() {
	gotoxy(29, 3); 
	printf(" ");

	gotoxy(19, 3); 
	printf(" ");

	gotoxy(9, 3);
	printf(" ");
}

// ÁÂÇ¥¼³Á¤
void gotoxy(int x, int y) {

	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

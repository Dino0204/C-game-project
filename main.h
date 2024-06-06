#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib,"winmm.lib")


#include <stdio.h>
#include<Windows.h>
#include<stralign.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <mmsystem.h>

#define VK_Q 0x51
#define VK_E 0x45	
#define VK_R 0x52

#define VK_1 0x31
#define VK_2 0x32
#define VK_3 0x33
#define VK_4 0x34

enum ColorType {
	BLACK,  	//0
	darkBLUE,	//1
	DarkGreen,	//2
	darkSkyBlue,//3
	DarkRed,  	//4
	DarkPurple,	//5
	DarkYellow,	//6
	GRAY,		//7
	DarkGray,	//8
	BLUE,		//9
	GREEN,		//10
	SkyBlue,	//11
	RED,		//12
	PURPLE,		//13
	YELLOW,		//14
	WHITE,		//15
} COLOR;

// 캐릭터 및 보스

/*
	아군

	1. 불딜러
	한칸당 3체력
	공격력 35
		일반공격 공격력 * 0.9
		특수공격 ( 공격력 * 0.6 ) * 6
		궁극기 8
	방어력 10
	체력 100
	궁게이지 60

	2. 물힐러
	한칸당 3체력
	공격력 10
		일반공격 공격력 * 0.7
		특수공격 다음턴 선택한 캐릭터 버프
		궁극기
	방어력 10
	체력 100
	궁게이지 70

	3. 바람서폿
	한칸당 5체력
	공격력 10
		일반공격
		특수공격
		궁극기
	방어력 10
	체력 150
	궁게이지 80

	4. 흙탱커
	한칸당 6 체력
	공격력 5
		일반공격
		특수공격
		궁극기
	체력 200
	방어력 50
	궁게이지 100

	보스
	한칸당 60 체력
	1.
	공격력 37
		일반공격
		특수공격
		궁극기
	체력 2000
	방어력 60
	궁게이지 80
*/

void gotoxy(int x, int y);
void SetColor(int color	);
void CursorView(char show);

void resetCursor();
void PrintScreen();

void menu();
int menuSelect();
int info();

int gameStart();
int gameOur();
int gameEnemy();
void control(); 
void HpCalcu(float true_hp, float n,int x,int y);

void menuPrint();
void mapPrint();
void hpPrint(float hp_idx);
void gagePrint();
void EndPrint();

void bossPrint();
void char1Print();
void char2Print();
void char3Print();
void char4Print();

void skill();
int enemyAI();
void Coefficient(int cnt, float q, float e, float r,int attack,int defence); 
int turn(); 



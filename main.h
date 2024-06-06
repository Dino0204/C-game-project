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

// ĳ���� �� ����

/*
	�Ʊ�

	1. �ҵ���
	��ĭ�� 3ü��
	���ݷ� 35
		�Ϲݰ��� ���ݷ� * 0.9
		Ư������ ( ���ݷ� * 0.6 ) * 6
		�ñر� 8
	���� 10
	ü�� 100
	�ð����� 60

	2. ������
	��ĭ�� 3ü��
	���ݷ� 10
		�Ϲݰ��� ���ݷ� * 0.7
		Ư������ ������ ������ ĳ���� ����
		�ñر�
	���� 10
	ü�� 100
	�ð����� 70

	3. �ٶ�����
	��ĭ�� 5ü��
	���ݷ� 10
		�Ϲݰ���
		Ư������
		�ñر�
	���� 10
	ü�� 150
	�ð����� 80

	4. ����Ŀ
	��ĭ�� 6 ü��
	���ݷ� 5
		�Ϲݰ���
		Ư������
		�ñر�
	ü�� 200
	���� 50
	�ð����� 100

	����
	��ĭ�� 60 ü��
	1.
	���ݷ� 37
		�Ϲݰ���
		Ư������
		�ñر�
	ü�� 2000
	���� 60
	�ð����� 80
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



#include "main.h"

int POS = 0;
int cnt = 0;
int turnCnt = 0;
int cntSkill = 0;
int skillPoint = 3;
int random = 0;

int gage_idx = 0;

int attack = 0;
int defence = 0;
int Ultimate = 0;

float hp_idx_1 = 20;
float hp_idx_2 = 20;
float hp_idx_3 = 20;
float hp_idx_4 = 20;
float hp_idx_boss = 20;

float true_hp_boss = 2000;
float true_hp_1 = 100;
float true_hp_2 = 150;
float true_hp_3 = 200;
float true_hp_4 = 400;

float hpPercent = 0;

float q = 0;
float e = 0;
float r = 0;

char map[30][120] = {
		("111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"),
		("111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"),
		("100000000000000000000000000000100000000000000000000000000001000000000000000000000000000100000000000000000000010000000001"),
		("100000A00000B00000C00000D0000010000000Q00000E00000R000000001000000000000000000000000000100000000000000000000010000000001"),
		("100000000000000000000000000000100000000000000000000000000001000000000000000000000000000100000000000000000000010000000001"),
		("111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"),
};
char menuMap[7][47] = {
		("11111111111111111111111111111111111111111111111"),
		("11000000000000000000000000000000000000000000011"),
		("11000000000000000000000000000000000000000000011"),
		("11000000000000000000000000000000000000000000011"),
		("11000000000000000000000000000000000000000000011"),
		("11000000000000000000000000000000000000000000011"),
		("11111111111111111111111111111111111111111111111"),

};

char hp[1][20] = {
	("RRRRRRRRRRRRRRRRRRRR")
};
char boss[16][32] = {
	("11111111111111111111111111111111"),
	("11000000000000000000000000000011"),
	("11000000111111111111110000000011"),
	("11000000110000000000001100000011"),
	("11000000110000000000001100000011"),
	("11000000110000000000001100000011"),
	("11000000110000000000001100000011"),
	("11000000111111111111110000000011"),
	("11000000111111111111110000000011"),
	("11000000110000000000001100000011"),
	("11000000110000000000001100000011"),
	("11000000110000000000001100000011"),
	("11000000110000000000001100000011"),
	("11000000111111111111110000000011"),
	("11000000000000000000000000000011"),
	("11111111111111111111111111111111")
};
char gage[3][3] = {
	{"RRR"},
	{"RRR"},
	{"RRR"},
};

char char1[16][32] = {
	("11111111111111111111111111111111"),
	("10000000000000000000000000000001"),
	("10000000000001111110000000000001"),
	("10000000000011000110000000000001"),
	("10000000000110000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000111111111111100000001"),
	("10000000000000000000000000000001"),
	("11111111111111111111111111111111")
};
char char2[16][32] = {
	("00000000RRRR11111111RRRR00000000"),
	("000000RR11111111RRRRRRRRRR000000"),
	("000000RR111111111111111111110000"),
	("0000RRRR111111111111111111111100"),
	("0000RR11111111111111111111111100"),
	("0000RR11RR1111111111111111111100"),
	("000011RRRRRRRRCCAACCCCAACCRR1100"),
	("0000111111CC11CCAACCCCAACC111100"),
	("0011001111CC11CCCCCCCCCCCCRR0000"),
	("00110011111111CCCCCCCCCCCC110000"),
	("00001111111111DDDDDDDDDD11110000"),
	("000011111111CCJJJJJJCC1111110000"),
	("0000110011WWJJJJWWJJWWJJ11110000"),
	("0011000011JJSSWWWGWWSSJJ11001100"),
	("0000000000SS00000000PP0000000000"),
	("0000000000PPCC0000CC000000000000"),
};
char char3[16][32] = {
	("11111111111111111111111111111111"),
	("10000000000000000000000000000001"),
	("10000000000001111110000000000001"),
	("10000000000011000110000000000001"),
	("10000000000110000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000111111111111100000001"),
	("10000000000000000000000000000001"),
	("11111111111111111111111111111111")
};
char char4[16][32] = {
	("11111111111111111111111111111111"),
	("10000000000000000000000000000001"),
	("10000000000001111110000000000001"),
	("10000000000011000110000000000001"),
	("10000000000110000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000000000110000000000001"),
	("10000000000111111111111100000001"),
	("10000000000000000000000000000001"),
	("11111111111111111111111111111111")
};



// > 메뉴창 표시
void menu() {
	menuPrint();
	gotoxy(15, 1);
	SetColor(PURPLE ,BLACK);
	printf("GSM TURN-GAME"); 
	SetColor(WHITE,BLACK); 
	gotoxy(10, 3);
	printf("게임시작");
	gotoxy(20, 3);
	printf("게임정보");
	gotoxy(30, 3);
	printf("게임종료");
}   


// 선택메뉴창 표시
int menuSelect() {
	while (1) {
		Sleep(200);
		resetCursor();
		if (GetAsyncKeyState(VK_LEFT))
			if (POS == 0)POS = 2;
			else POS -= 1;

		else if (GetAsyncKeyState(VK_RIGHT))
			if (POS == 2)POS = 0;
			else POS += 1;

		else if (GetAsyncKeyState(VK_RETURN)) {
			if (POS == 0) {
				gotoxy(10, 3);
				SetColor(SkyBlue,BLACK);
				printf("게임시작");

				info();
				gameStart(); 
				break;
			}
			else if (POS == 1) {

				gotoxy(20, 3);
				SetColor(SkyBlue,BLACK);
				printf("게임정보");

				Sleep(500);
				system("cls");
				break;
			}
			else if (POS == 2) {
				gotoxy(30, 3);
				SetColor(SkyBlue, BLACK);
				printf("게임종료");

				Sleep(500);
				gotoxy(0, 20);
				return POS;
			}
		}
		
		if (POS == 0) {
			gotoxy(9, 3);
			SetColor(SkyBlue,BLACK);
			printf(">");
		}
		else if (POS == 1) {
			gotoxy(19, 3);
			SetColor(SkyBlue,BLACK);
			printf(">");
		}
		else if (POS == 2) {
			gotoxy(29, 3);
			SetColor(SkyBlue,BLACK);
			printf(">");
		}
	}
}


// 게임 정보창 || 게임로딩창 출력
int info(){
	system("cls");
	if (POS == 0) {
		return 2;
	}
	SetColor(SkyBlue, BLACK);
	gotoxy(10, 1);
	printf("  [ 조작키 ]");
	SetColor(BLUE, BLACK);

	gotoxy(8, 5);
	printf("[ 선택 ] ENTER");

	gotoxy(8, 8);
	printf("[ 뒤로가기 ] ESC");

	gotoxy(8, 11);
	printf("[ 공격 ] Q , E , R");

	gotoxy(8, 14);
	printf("[ 커서이동 ] ← | →");

	gotoxy(8, 17);
	printf("[ 캐릭터선택 ] 1,2,3,4 ");

	SetColor(RED, BLACK);
	gotoxy(8, 23);
	printf("[ 주의사항 ] 창크기를 변경하지 마세요.");

	SetColor(SkyBlue, BLACK);
	gotoxy(40, 1);
	printf("[ 스킬포인트 ]");
	SetColor(BLUE, BLACK);
	gotoxy(38, 3);
	printf("스킬포인트는 E스킬을 사용할 수 있는 횟수입니다.");
	gotoxy(38, 5);
	printf("Q스킬을 통해 최대 5까지 채울 수 있습니다.");

	SetColor(SkyBlue, BLACK);
	gotoxy(40, 9);
	printf("[ 궁극기 ]");
	SetColor(BLUE, BLACK);
	gotoxy(38, 11);
	printf("오른쪽 하단의 회색사각형은 궁극기게이지입니다.");
	gotoxy(38, 13);
	printf("Q는 1, E는 2의 게이지를 채울 수 있으며,");
	gotoxy(38, 15);
	printf("최대치인 9게이지를 통해 궁극기를 사용할 수 있습니다.");
	gotoxy(38, 17);
	printf("( 궁극기게이지는 캐릭터 모두와 공유합니다. )");

	gotoxy(70, 23);
	printf("[ 개발자 ] 준혁");

	SetColor(WHITE, BLACK);

	while (1) {
		if (POS == 1) {
			if (GetAsyncKeyState(VK_ESCAPE)) {
				return 1;
			}
		}
	}
}


// 게임인터페이스 출력
int gameStart() {
	system("cls");
	system("mode con: cols=130 lines=30");
	skillPoint = 3;
	gage_idx = 0;
	true_hp_boss = 2000;
	true_hp_1 = 100;
	true_hp_2 = 150;
    true_hp_3 = 200;
	true_hp_4 = 400;
	mapPrint();
	turn();
}

int turn() {
	// 0 = 우리가 행동
	// 1 = 상대가 행동
	gotoxy(90, 27);
	SetColor(SkyBlue, BLACK);
	printf("스킬포인트  [ %d ]", skillPoint);

	gagePrint();

	if (turnCnt == 0) {
		gameOur();
	}
	else if (turnCnt == 1) {
		gameEnemy();
	}
	else {
		turnCnt = 0;
		return 1;
	}
}

int gameOur() {
	gotoxy(52, 3);
	SetColor(WHITE, GREEN);
	printf("아군의 턴입니다");
	while (turnCnt == 0) {
		control();
		gotoxy(65, 27);
		SetColor(RED, BLACK);
		printf("현재 캐릭터  [ %d ]", cnt);
		
		if ( cnt > 0 ) {
			skill(cnt);
			if (cntSkill > 0) {
				cntSkill = 0;
				turnCnt = 1;
				turn();
				break;
			}
		}
	}

}

int gameEnemy() {

	bossPrint();
	HpCalcu(true_hp_boss,20,80,2);
	gotoxy(81, 4);
	hpPrint(hp_idx_boss);


	gotoxy(47, 10);
	SetColor(RED, BLACK);
	printf("%d 아군이 공격당했습니다!", enemyAI());

	if (random == 1) {
		true_hp_1 -= 20;
	}
	else if (random == 2) {
		true_hp_2 -= 20;
	}
	else if (random == 3) {
		true_hp_3 -= 20;
	}
	else if (random == 4) {
		true_hp_4 -= 20;
	}


	gotoxy(52, 3);
	SetColor(WHITE, RED);
	printf("적군의 턴입니다");

	while (turnCnt == 1) {
		control();
		if (random > 0 && GetAsyncKeyState(VK_RIGHT)) {
			SetColor(WHITE, BLACK);
			gotoxy(47, 10);
			printf("                        ");
			turnCnt = 0;
			turn();
			break;
		}
	}
}

int enemyAI() {
	srand(time(NULL));
	random = rand() % 4 + 1;
	return random;
}

// 스킬 출력 및 계산
void skill(int cnt) {
	// 캐릭터별 공격력,방어력,(q,e,r)계수등을 지정
	if (cnt == 1) {
		attack = 35;
		defence = 30;

		q = 0.9;
		e = 2.6;
		r = 10.0;
	}
	else if (cnt == 2) {
		attack = 35;
		defence = 30;

		q = 0.7;
		e = 3.6;
		r = 8.0;
	}
	else if (cnt == 3) {
		attack = 35;
		defence = 30;

		q = 0.9;
		e = 1.6;
		r = 2.0;
	}
	else if (cnt == 4) {
		attack = 35;
		defence = 30;

		q = 0.3;
		e = 0.6;
		r = 1.0;
	}
	Coefficient(cnt,q,e,r,attack,defence);
}	

void Coefficient(int cnt, float q, float e, float r, float attack, float defence) {
	gotoxy(50, 20);
	SetColor(BLUE, BLACK);
	if (GetAsyncKeyState(VK_Q)) {
		printf("%d 일반공격! %.f데미지!", cnt, attack * q - (0.3 * defence ));
		cntSkill = 1;
		gage_idx ++;

		true_hp_boss -= (attack * q - (0.3 * defence));

		if (skillPoint < 5) {
			skillPoint++;
		}
	}
	else if (GetAsyncKeyState(VK_E) && skillPoint > 0) {
		printf("%d 특수공격! %.f데미지!", cnt, attack * e - (0.3 * defence ));
		cntSkill = 1; 
		gage_idx +=2;
		skillPoint--;

		true_hp_boss -= (attack * e - (0.3 * defence));

	}
	else if (GetAsyncKeyState(VK_R)&& gage_idx >= 9) {
		printf("%d 궁극공격! %.f데미지!", cnt, attack * r - (0.3 * defence ));
		gage_idx = 0;
		cntSkill = 1;

		true_hp_boss -= (attack * r - (0.3 * defence));

	}
	
	if (gage_idx >= 9) {
		gage_idx = 9;
	}

	Sleep(700);
	gotoxy(50, 20);
	printf("                      ");
	cnt = 0;
}

void control() {
	// 1,2,3,4 입력
	if (GetAsyncKeyState(VK_1)) {
		char1Print();
		cnt = 1;
	}
	else if (GetAsyncKeyState(VK_2)) {
		char2Print();
		cnt = 2;
	}
	else if (GetAsyncKeyState(VK_3)) {
		char3Print();
		cnt = 3;
	}
	else if (GetAsyncKeyState(VK_4)) {
		char4Print();
		cnt = 4;
	}
	if (GetAsyncKeyState(VK_ESCAPE)) {
		SetColor(WHITE, BLACK);
		cnt = 0;
		cntSkill = 0;
		turnCnt = 2;
		system("cls");
		return 1;
	}

	// 1,2,3,4 유지
	if (cnt == 1) {
		HpCalcu(true_hp_1, 1, 15, 4);
		gotoxy(16, 6);
		hpPrint(hp_idx_1);
	}
	else if (cnt == 2) {
		HpCalcu(true_hp_2, 1.5, 15, 4);
		gotoxy(16, 6);
		hpPrint(hp_idx_2);
	}
	else if (cnt == 3) {
		HpCalcu(true_hp_3, 2, 15, 4);
		gotoxy(16, 6);
		hpPrint(hp_idx_3);
	}
	else if (cnt == 4) {
		HpCalcu(true_hp_4, 4, 15, 4);
		gotoxy(16, 6);
		hpPrint(hp_idx_4);
	}
}
 
void HpCalcu(float true_hp , float n , int x , int y) {
	hpPercent = true_hp / n;
	SetColor(WHITE, BLACK);
	if (hpPercent <= 0 || true_hp <= 0) {
		hpPercent = 0;
		true_hp = 0;
	}

	if (true_hp_boss <= 0) {
		SetColor(WHITE, BLACK);
		cnt = 0;
		cntSkill = 0;
		turnCnt = 2;
		system("cls");
		EndPrint();
		Sleep(5000);
		system("cls");
		return 1;
	}
	gotoxy(x, y);
	printf("                         ");
	SetColor(GREEN, BLACK);
	gotoxy(x, y);
	printf(" [ HP ]  %.2f%% | %.f", hpPercent, true_hp);
}

// 메뉴,맵,체력,게이지 출력
void menuPrint() {
	for (int h = 0; h < 7; h++) {
		for (int w = 0; w < 47; w++) {
			gotoxy(w, h);
			char tempmap = menuMap[h][w];
			if (tempmap == '0') {
				SetColor(BLACK, BLACK);
				printf(" ");
			}
			else if (tempmap == '1') {
				SetColor(WHITE, WHITE);
				printf("■");
			}
		}
	}
}
		
void mapPrint() {
	for (int h = 0; h < 30; h++) {
		for (int w = 0; w < 120; w++) {
			gotoxy(w, h);
			char tempmap = map[h][w];
			if (tempmap == '0') {
				SetColor(BLACK, BLACK);
				printf(" ");
			}
			else if (tempmap == '1') {
				SetColor(WHITE, WHITE);
				printf("■");
			}
			else if (tempmap == 'A') {
				SetColor(RED, BLACK);
				printf("①");
			}
			else if (tempmap == 'B') {
				SetColor(BLUE, BLACK);
				printf("②");
			}
			else if (tempmap == 'C') {
				SetColor(GREEN, BLACK);
				printf("③");
			}
			else if (tempmap == 'D') {
				SetColor(YELLOW, BLACK);
				printf("④");
			}
			else if (tempmap == 'Q') {
				SetColor(darkSkyBlue, BLACK);
				printf("Q");
			}
			else if (tempmap == 'E') {
				SetColor(darkSkyBlue, BLACK);
				printf("E");
			}
			else if (tempmap == 'R') {
				SetColor(darkSkyBlue, BLACK);
				printf("R");
			}
		}
	}
}

void hpPrint(float hp_idx) {
	// 총 20칸 / 한칸당 최대체력의 5%
	// hp 초기화
	for (int i = 0; i < 20; i++) {
		hp[0][i] = 'R';
	}

	hp_idx = hpPercent / 5;

	// 각각의 hp 
	for (int i = 0; i < (int)hp_idx; i++) {
		hp[0][i] = 'A';
	}

	// hp 출력
	for (int h = 0; h < 1; h++) {
		for (int w = 0; w < 20; w++) {
			char tempmap = hp[h][w];
			if (tempmap == 'A') {
				SetColor(RED, RED);
				printf("■");
			}
			else if (tempmap == 'R') {
				SetColor(WHITE, WHITE);
				printf("■");
			}
		}
	}

}

void gagePrint() {

	//게이지 초기화
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {
			gage[i][j] = 'R';
		}
	}

	// 공유 게이지
	if (gage_idx > 6) {
		gage_idx - 6;
	}else if(gage_idx > 3){
		gage_idx - 3;
	}
	for (int j = 0; j < gage_idx; j++) {
		gage[0][j] = '1';
	}
	
	
	// 게이지 출력
	for (int h = 0; h < 3; h++) {
		for (int w = 0; w < 3; w++) {
			gotoxy(w+113, h+26);
			char tempmap = gage[h][w];
			if (tempmap == '1') {
				SetColor(YELLOW, YELLOW);
				printf("■");
			}
			else if (tempmap == 'R') {
				SetColor(DarkGray, DarkGray);
				printf("■");
			}
		}
	}
	SetColor(WHITE, BLACK);
}

void EndPrint() {
	gotoxy(60, 15);
	printf("승리!");
}

// 보스 출력
void bossPrint() {
	for (int h = 0; h < 16; h++) {
		for (int w = 0; w < 32; w++) {
			gotoxy(w+75,h+6);
			char tempmap = boss[h][w];
			if (tempmap == '0') {
				SetColor(BLACK, BLACK);
				printf(" ");
			}
			else if (tempmap == '1') {
				SetColor(WHITE, WHITE);
				printf("■");
			}
			else if (tempmap == 'A') {
				SetColor(RED, RED);
				printf("■");
			}
		}
	}
}

// 캐릭터 출력
void char1Print() {
	for (int h = 0; h < 16; h++) {
		for (int w = 0; w < 32; w++) {
			gotoxy(w + 10, h + 8);
			char tempmap = char1[h][w];
			if (tempmap == '0') {
				SetColor(BLACK, BLACK);
				printf(" ");
			}
			else if (tempmap == '1') {
				SetColor(RED,RED );
				printf("■");
			}
			else if (tempmap == 'A') {
				SetColor(RED, BLACK);
				printf("①");
			}
		}
	}
}

void char2Print()     {
	for (int h = 0; h < 16; h++) {
		for (int w = 0; w < 32; w++) {
			gotoxy(w + 10, h+8);
			char tempmap = char2[h][w];
			if (tempmap == '0') {
				SetColor(BLACK, BLACK);
				printf(" ");
			}
			else if (tempmap == '1') {
				//38; 2; 63; 72; 204; --> 문자색
				//48; 2; 63; 72; 204m --> 배경색
				printf("\033[38;2;63;72;204;48;2;63;72;204m");
				printf("■");
				printf("\033[0m"); // --> 색 초기화
			}
			else if (tempmap == 'R') {
				printf("\033[38;2;200;191;231;48;2;200;191;231m");
				printf("■");
				printf("\033[0m");
			}
			else if (tempmap == 'C') {
				printf("\033[38;5;224;48;5;224m");
				printf("■");
				printf("\033[0m");
			}
			else if (tempmap == 'J') {
				printf("\033[38;2;62;31;79;48;2;62;31;79m");
				printf("■");
				printf("\033[0m");
			}
			else if (tempmap == 'A') {
				SetColor(RED, RED);
				printf("■");
			}
			else if (tempmap == 'G') {
				SetColor(DarkGray, WHITE);
				printf("■");
			}
			else if (tempmap == 'P') {
				SetColor(PURPLE, PURPLE);
				printf("■");
			}
			else if (tempmap == 'S') {
				SetColor(SkyBlue, SkyBlue);
				printf("■");
			}
			else if (tempmap == 'D') {
				SetColor(darkBLUE, darkBLUE);
				printf("■");
			}
			else if (tempmap == 'W') {
				SetColor(WHITE, WHITE);
				printf("■");
			}
		}
	}
}	

void char3Print() {
	for (int h = 0; h < 16; h++) {
		for (int w = 0; w < 32; w++) {
			gotoxy(w + 10, h + 8);
			char tempmap = char3[h][w];
			if (tempmap == '0') {
				SetColor(BLACK, BLACK);
				printf(" ");
			}
			else if (tempmap == '1') {
				SetColor(GREEN, GREEN);
				printf("■");
			}
			else if (tempmap == 'A') {
				SetColor(RED, BLACK);
				printf("①");
			}
		}
	}
}

void char4Print() {
	for (int h = 0; h < 16; h++) {
		for (int w = 0; w < 32; w++) {
			gotoxy(w + 10, h + 8);
			char tempmap = char4[h][w];
			if (tempmap == '0') {
				SetColor(BLACK, BLACK);
				printf(" ");
			}
			else if (tempmap == '1') {
				SetColor(YELLOW, YELLOW);
				printf("■");
			}
			else if (tempmap == 'A') {
				SetColor(RED, BLACK);
				printf("①");
			}
		}
	}
}



	
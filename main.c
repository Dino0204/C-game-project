#include "main.h"

int main() {
	int POS = 0;

	//PlaySound(TEXT("Interstellar-Journey-_Instrumental_.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
re: 
	system("cls");
	SetColor(WHITE, BLACK);
	CursorView(0);
	menu();

	if (2 == menuSelect()) {	
		return 0;
	}
		if (1 == info()) {
		goto re;
	}
	else if (2 == info()) {		
		if (1 == turn()) {	
			goto re;
		}
	}
	return 0;	
}

	
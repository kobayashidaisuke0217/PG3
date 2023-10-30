#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
typedef int (*PFunc)();

int RandDice() {
	return rand() % 6 + 1;
}
void Answer(PFunc p, int selectAnswer) {
	printf("正解は...?\n");
	//Sleep(3000);
	int answer = p();
	int answerNum = answer % 2;
	int selectNum = selectAnswer % 2;
	printf("答え%d\n", answer);
	if (selectNum == 0) {
		printf("予想  偶数\n");
	}
	else {
		printf("予想  奇数\n");
	}
	if (answerNum == 0) {
		printf("答えは偶数!\n");
		Sleep(1500);
	}
	else {
		printf("答えは奇数!\n");
		Sleep(1500);
	}

	
	if (selectNum == answerNum) {
		printf("正解!!!\n\n");
	}
	else {
		printf("不正解!!!\n\n");
	}
}

int main() {
	srand((unsigned int)time(nullptr));

	PFunc pfunc = &RandDice;
	int select;
	printf("サイコロは偶数( 0 )、奇数( 1 )どっちでしょう\n\n");
	printf("偶数( 0 )、奇数( 1 )どちらかを入力\n");
	printf("予想:");
	scanf_s("%d", &select);

	// 結果発表
	Answer(pfunc, select);
	return 0;
}
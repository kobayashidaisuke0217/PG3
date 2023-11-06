#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>
typedef int (*PFunc)(int a );


void SetTimeOut(PFunc p,int second, int selectAnswer) {
	Sleep(second*1000);
	p(selectAnswer);
}
int Answer(int selectAnswer) {
	
	
	
	std::function<int()>diceRoll = [&]() {
		return rand() % 6 + 1;
	};
	int answer = diceRoll();
	int answerNum = answer % 2;
	int selectNum = selectAnswer % 2;
	printf("出た目は%d\n", answer);
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
	return 0;
}

int main() {
	srand((unsigned int)time(nullptr));

	PFunc pfunc = &Answer;
	int select;
	
	printf("サイコロは偶数( 0 )、奇数( 1 )どっちでしょう\n\n");
	printf("偶数( 0 )、奇数( 1 )どちらかを入力\n");
	printf("予想:");
	scanf_s("%d", &select);
	printf("正解は?\n");
	// 結果発表
	SetTimeOut(pfunc,3, select);
	return 0;
}
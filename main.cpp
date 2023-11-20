#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>
void SetTimeOut (std::function<void(void)> function, int waittime) {
	Sleep(waittime * 1000);
	function();
};
int main() {
	srand((unsigned int)time(nullptr));
	
	std::function<int()> randomDice = []() {
			return  rand() % 6 + 1;
	
	};
	// 入力した予想
	int selectAnswer;
	int waitTime = 3;

	while (true) {
		printf("サイコロは偶数( 0 ),奇数( 1 )どっちだ\n\n");
		printf("偶数( 0 ),奇数( 1 ),終了(2)どちらかを入力\n");
		printf("予想:");
		scanf_s("%d", &selectAnswer);
		if (selectAnswer == 2) {
			break;
		}
		printf("正解は?\n");
		
		std::function<void()> resultDiceRoll = [&]() {
			// 正解
			int result = randomDice();
			int answerNum = result % 2;
			// 予想
			int selectNum = selectAnswer;

			printf("%d\n", result);
			if (answerNum == 0) {
				printf("偶数!\n");
				Sleep(1500);
			}
			else if (answerNum != 0) {
				printf("奇数!\n");
				Sleep(1500);
			}

			// どちらも同じ数なら正解
			if (selectNum == answerNum) {
				printf("正解\n");
			}
			else {
				printf("不正解\n");
			}
			
		};
		SetTimeOut(resultDiceRoll,waitTime);
	}

	return 0;
}
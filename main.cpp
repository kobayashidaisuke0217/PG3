#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>

int main() {
	srand((unsigned int)time(nullptr));
	
	std::function<int()> randomDice = []() {
			return  rand() % 6 + 1;
	
	};
	std::function<void(int, int,int)> setTimeOut = [&](int function, int selectAnswer,int waitTime) {
		printf("正解は?\n");
		Sleep(waitTime*1000);

		// 正解
		int answerNum = function % 2;
		// 予想
		int selectNum = selectAnswer % 2;

		printf("%d\n", function);
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
	// 入力した予想
	int selectAnswer;

	printf("サイコロは奇数( 2 )、偶数( 1 )どっちだ\n\n");
	while (true) {
		printf("奇数( 2 )、偶数( 1 ),終了(0)どちらかを入力\n");
		printf("予想:");
		scanf_s("%d", &selectAnswer);
		if (selectAnswer == 0) {
			break;
		}
		setTimeOut(randomDice(), selectAnswer,3);
	}

	return 0;
}
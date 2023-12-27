#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <list>


int main() {

	std::list<const char*> station_ = {
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	printf("1970年-山手線\n");
	int count = 1;
	for (const char* station : station_) {
		// 駅番号
		printf("JY%d ", count);
		// 要素
		printf("%s\n", station);
		count++;
	}
	printf("\n");
	//西日暮里を田畑の前に追加
	for (std::list<const char*>::iterator itr = station_.begin(); itr != station_.end(); itr++) {
		if (*itr == "Tabata") {
			itr = station_.insert(itr, "Nishi-Nippori");
			break;
		}
	}

	printf("2019年-山手線\n");
	count = 1;
	for (const char* station : station_) {
		// 駅番号
		printf("JY%d ", count);
		// 要素
		printf("%s\n", station);
		count++;
	}
	printf("\n");
	//高輪ゲートウェイを田町の前に追加
	for (std::list<const char*>::iterator itr = station_.begin(); itr != station_.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = station_.insert(itr, "Takanawa-Gateway");
			break;
		}
	}

	printf("2022年-山手線\n");
	count = 1;
	for (const char* station : station_) {
		// 駅番号
		printf("JY%d ", count);
		// 要素
		printf("%s\n", station);
		count++;
	}
	printf("\n");
	return 0;
}
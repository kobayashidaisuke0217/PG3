#include <stdio.h>

template<typename T1,typename T2>

T1 Min(T1 a, T2 b) {
	if (static_cast<T1>(a) >= static_cast<T2>(b)) {
		printf("%f\n", static_cast<T1>(a));
		return static_cast<T1>(a);
	}
	else {
		printf("%f\n", static_cast<T1>(b));
		return static_cast<T1>(b);
	}
}
template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return 0;	
}
template<typename T1>
int Min(int a, T1 b) {
	if (static_cast<int>(a) >= static_cast<int>(b)) {
		printf("%d\n", static_cast<int>(a));
		return static_cast<int>(a);
	}
	else {
		printf("%d\n", static_cast<int>(b));
		return static_cast<int>(b);
	}
}
int main() {
	 Min<float>(1000, 200.0f);
	 Min<char,char>(1000, 200.0f);
	 Min<double>(1000, 2000.0);
	 Min<double, float>(1.7, 1.6f);
	return 0;
}
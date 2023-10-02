#include <stdio.h>

template<typename T1,typename T2>

T1 Min(T1 a, T2 b) {
	if (static_cast<T1>(a) >= static_cast<T2>(b)) {
		return static_cast<T1>(a);
	}
	else {
		return static_cast<T1>(b);
	}
}
template<>
char Min<char>(char a, char b) {
return	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
}
int main() {
	printf("%d\n", Min<int, float>(1000, 200.0f));
	printf("%d\n", Min<char, char>(1000, 200.0f));
	printf("%d\n", Min<int, double>(1000, 2000.0));
	printf("%f\n", Min<double, float>(1.7, 1.6f));
	return 0;
}
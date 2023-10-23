#include <stdio.h>
#include <iostream>
template<typename T1,typename T2>

T1 Min(T1 a, T2 b) {
	if (a >=b) {
		std::cout << a << std::endl;
			return a;
	}
	else {
		std::cout << b <<std::endl;
		return static_cast<T1>(b);
	}
}
template<>
char Min<char>( char a,char b) {
	printf("数字以外は代入できません\n");
	return 0;	
}
int main() {
	
	 Min<int,float>(1000, 200.0f);
	 Min<char,char>('a','b');
	 Min<int,double>(1000, 2000.0);
	 Min<double, float>(1.7, 1.6f);
	return 0;
}
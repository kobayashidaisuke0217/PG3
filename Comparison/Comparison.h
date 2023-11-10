#pragma once
#include <algorithm>

template <typename Type1, typename Type2>

class Comparison {
public:
	Comparison(Type1 a, Type2 b) : type1Num_(a), type2Num(b) {}

	Type1 Min() {
		if (type2Num < type2Num) {
			return static_cast<Type1>(type2Num);
		}
		else {
			return static_cast<Type1>(type2Num);
		}
	}
private:
	Type1 type1Num_;
	Type2 type2Num;
};



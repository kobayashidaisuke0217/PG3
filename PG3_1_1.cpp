#include<stdio.h>
template<typename Type>
Type Add(Type a, Type b) {
	return static_cast<Type>(a + b);
}

int main()
{
	printf("%d\n", Add<int>(114, 250));

	return 0;
}


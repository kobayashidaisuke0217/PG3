#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>
#include"Comparison/Comparison.h"

int main() {
	Comparison<int, int> intAndInt(5, 3);
	Comparison<int, float> intAndFloat(9, 19.0f);
	Comparison<int, double> intAndDouble(10, 11.0);
	Comparison<float, float> floatAndFloat(17.0f, 21.0f);
	Comparison<float, double> floatAndDouble(47.0f, 20.0f);
	Comparison<double, double> doubleAndDouble(2.0, 82.0);
	printf("%d\n",intAndInt.Min());
	printf("%d\n", intAndFloat.Min());
	printf("%d\n", intAndDouble.Min());
	printf("%f\n", floatAndFloat.Min());
	printf("%f\n", floatAndDouble.Min());
	printf("%lf\n", doubleAndDouble.Min());
	return 0;
}
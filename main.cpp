#include <stdio.h>
int Add(int salaryA) {
	return salaryA + 1072;
}
int recursion(int salaryB) {
	return salaryB * 2 - 50;
}

int compartion(int salaryA, int salaryB,int count) {
	if (salaryA <= salaryB) {
		return salaryB;
	}
	count++;
	printf("%d時間働いたとき\n", count);
	salaryA= Add(salaryA);
	printf("一般的な賃金体系の場合は%d円\n", salaryA);
	salaryB = recursion(salaryB);
	printf("再帰的な賃金体系の場合は%d円\n", salaryB);
	compartion(salaryA, salaryB,count);
	
}
int main() {
	int salaryA=1072;
	int salaryB=100;
	int hour = 1;
	compartion(salaryA, salaryB, hour);
	return 0;
}
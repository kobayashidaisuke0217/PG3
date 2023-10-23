#include <stdio.h>
int Add(int salaryA) {
	return salaryA + 1072;
}
int Recursion(int salaryB) {
	return salaryB * 2 - 50;
}

int Compartion(int salaryA, int salaryB,int salaryBAdd ,int count) {
	count++;
	printf("%d時間働いたとき\n", count);
	salaryA = Add(salaryA);
	printf("一般的な賃金体系の場合は%d円\n", salaryA);
	salaryB = Recursion(salaryB);
	salaryBAdd = salaryBAdd + salaryB;
	printf("再帰的な賃金体系の場合は%d円\n", salaryBAdd);
	if (salaryA <= salaryB) {
		return salaryB;
	}
	
	Compartion(salaryA, salaryB,salaryBAdd,count);
	
}
int main() {
	int salaryA=1072;
	int salaryB=100;
	int salaryBAdd = 100;
	int hour = 1;
	Compartion(salaryA, salaryB, salaryBAdd,hour);
	return 0;
}
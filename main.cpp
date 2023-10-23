#include <stdio.h>
int AddSalary(int salaryA) {
	return salaryA + 1072;
}
int CalcRecursiveSalary(int salaryB) {
	return salaryB * 2 - 50;
}

int CompartionSalary(int salaryA, int salaryB,int salaryBAdd ,int count) {
	count++;
	printf("%d時間働いたとき\n", count);
	salaryA = AddSalary(salaryA);
	printf("一般的な賃金体系の場合は%d円\n", salaryA);
	salaryB = CalcRecursiveSalary(salaryB);
	salaryBAdd = salaryBAdd + salaryB;
	printf("再帰的な賃金体系の場合は%d円\n", salaryBAdd);
	if (salaryA <= salaryB) {
		return salaryB;
	}
	
	CompartionSalary(salaryA, salaryB,salaryBAdd,count);
	
}
int main() {
	int salaryA=1072;
	int salaryB=100;
	int salaryBAdd = 100;
	int hour = 1;
	CompartionSalary(salaryA, salaryB, salaryBAdd,hour);
	return 0;
}
#include <stdio.h>
int Add(int salaryA) {
	return salaryA + 1072;
}
int Recursion(int salaryB) {
	return salaryB * 2 - 50;
}

int Compartion(int salaryA, int salaryB,int salaryBAdd ,int count) {
	count++;
	printf("%dŠÔ“­‚¢‚½‚Æ‚«\n", count);
	salaryA = Add(salaryA);
	printf("ˆê”Ê“I‚È’À‹à‘ÌŒn‚Ìê‡‚Í%d‰~\n", salaryA);
	salaryB = Recursion(salaryB);
	salaryBAdd = salaryBAdd + salaryB;
	printf("Ä‹A“I‚È’À‹à‘ÌŒn‚Ìê‡‚Í%d‰~\n", salaryBAdd);
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
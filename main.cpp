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
	printf("%dŽžŠÔ“­‚¢‚½‚Æ‚«\n", count);
	salaryA= Add(salaryA);
	printf("ˆê”Ê“I‚È’À‹à‘ÌŒn‚Ìê‡‚Í%d‰~\n", salaryA);
	salaryB = recursion(salaryB);
	printf("Ä‹A“I‚È’À‹à‘ÌŒn‚Ìê‡‚Í%d‰~\n", salaryB);
	compartion(salaryA, salaryB,count);
	
}
int main() {
	int salaryA=1072;
	int salaryB=100;
	int hour = 1;
	compartion(salaryA, salaryB, hour);
	return 0;
}